
#include "func.h"


int main()
{
	std::thread t1(exe);
	std::thread t2(timer, 10);
	while (!time_out) {

	}
	return 1;
}