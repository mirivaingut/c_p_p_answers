#include <iostream>
using namespace std;
void main() {
	cout << "enter num";
	int num{}, sqe{ 0 };
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		sqe += num;
	}
	cout << num << "^2 =" << sqe;
	getchar();
	getchar();
}