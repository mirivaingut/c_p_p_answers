#include "func.h"

void timer(int time)
{
	for (int i = 0; i < time; i++)
	{
		std::this_thread::sleep_for(1s);
	}
	m.lock();
	if (!time_out) {
		time_out = true;
		std::cout << "time out!!!";
	}
	m.unlock();
}

void exe()
{
	std::cout << "1 + 4 = ";
	int ans{};
	std::cin >> ans;
	m.lock();
	if (!time_out) {
		time_out = true;
		if (ans == (1 + 4))
		{
			std::cout << "good answer!!!";
		}
		else {
			std::cout << "bed answer!!!";
		}
	}
	m.unlock();

}