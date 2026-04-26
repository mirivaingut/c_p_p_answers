#include <iostream>
#include <bitset>

std::bitset<32> rotata(int bits,int k)
{
	return (bits << k) | (bits >> (32-k));
}


void main()
{
	std::cout << "Enter a number:";
	int decimal{};
	std::cin >> decimal;
	std::cout << "Enter k:";
	int k{};
	std::cin >> k;
	std::cout << "the number after rotata:" << rotata(decimal, k);
	getchar();
	getchar();
}