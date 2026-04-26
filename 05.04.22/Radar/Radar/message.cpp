#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "message.h"

using namespace std;

class baseMessage {
protected:
	unsigned char* messageBuffer;
	int messageId;
	int messageType;
public:
	baseMessage(unsigned char* buffer, int id) {
		this->messageBuffer = buffer;
		this->messageId = id;
		messageType = static_cast<int>(messageBuffer[1]);
	}

	baseMessage(int type, int id) {
		this->messageBuffer = 0;
		this->messageId = id;
		messageType = type;
	}

	~baseMessage() {
		delete[]messageBuffer;
	}

	virtual void parseMessage(unsigned char* buffer) = 0;
	virtual void parseBack(baseMessage bm) = 0;
	virtual void print() = 0;
	unsigned char* getMessageBuffer() { return messageBuffer; }
};

class statusMessage :protected baseMessage {
protected:
	short status;
public:
	statusMessage(unsigned char* buffer, int id) :baseMessage(buffer, id) {
		status = 0;
	}

	statusMessage(int id) :baseMessage(1, id) {
		status = 0;
	}

	virtual void parseMessage() {
		status = static_cast<short>(messageBuffer[2]);
	}

	virtual void parseBack() {
		messageBuffer = new unsigned char[3];
		memcpy((void*)(messageBuffer), (void*)(&messageType), 2);
		memcpy((void*)(messageBuffer[2]), (void*)(&status), 1);
	}

	virtual void print() {
		cout << "\tsyatus:  " << status << endl;
	}
};

class discoveryMessage :protected baseMessage {
protected:
	float distance;
	float angle;
	float speed;

public:
	discoveryMessage(unsigned char* buffer, int id) :baseMessage(buffer, id) {
		distance = 0;
		angle = 0;
		speed = 0;
	}

	discoveryMessage(float distance, float angle, float speed, int id) :baseMessage(1, id) {
		distance = 0;
		angle = 0;
		speed = 0;
	}

	virtual void parseMessage() {
		memcpy((void*)(&distance),(void*)(messageBuffer[2]), 4);
		memcpy((void*)(&angle), (void*)(messageBuffer[6]), 4);
		memcpy((void*)(&speed), (void*)(messageBuffer[10]), 4);
	}

	virtual void parseBack() {
		messageBuffer = new unsigned char[14];
		memcpy((void*)(messageBuffer), (void*)(&messageType), 2);
		memcpy((void*)(messageBuffer[2]), (void*)(&distance), 4);
		memcpy((void*)(messageBuffer[6]), (void*)(&angle), 4);
		memcpy((void*)(messageBuffer[10]), (void*)(&speed), 4);
	}

	virtual void print() {
		cout << "distance:  " << distance << endl
			<< "angle:  " << angle << endl
			<< "speed:  " << speed << endl;
	}
};




