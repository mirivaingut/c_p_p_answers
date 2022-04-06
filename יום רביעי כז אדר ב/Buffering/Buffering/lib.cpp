#include <stdlib.h>
#include <iostream>
#include "lib.h"
using namespace std;

void processData(int*& outbuf, int& count, int& total) {
	if (!outbuf) {
		return;
	}
	total += *(outbuf + count);
	count++;
	if (count == BUFSIZE) {
		count = 0;
		delete[]outbuf;
		outbuf = NULL;
	}
}

int* generateData(int*& inbuf, int& count) {
	int n = (rand() / (RAND_MAX + 1.) * 10);
	int* ret = 0;
	*(inbuf + count) = n;
	count++;
	if (count == BUFSIZE) {
		count = 0;
		ret = inbuf;
		inbuf = new int[BUFSIZE];
	}
	return ret;
}

double getProb()
{
	return rand() / (RAND_MAX + 1.);
}