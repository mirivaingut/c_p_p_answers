#include "lib.h"
#include <iostream>
using namespace std;

int main(){
	int* fillbuffer = new int[BUFSIZE];
	int fillcnt = 0;
	int* processbuffer = NULL;
	int processcnt = 0;
	int tcount = 0;
	for (int i = 0; i < ITERATIONS; i++){
		int* temp;
		if (getProb() <= 0.40){
			temp = generateData(fillbuffer, fillcnt);
			if (temp)
				processbuffer = temp;
		}
		if(getProb() <= 0.60)
			processData(processbuffer, processcnt, tcount);
		cout << fillcnt << '\t' << processcnt << endl;
	}
	cout << "Total value: " << tcount << endl;
	return 0;
}