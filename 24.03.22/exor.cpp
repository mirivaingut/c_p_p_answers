#include <iostream>
#include <bitset>
using namespace std;

bitset<32> doexor(int x, int y) {
	return ((~(x & y)) & (x | y));
}

void main() {
	cout << "enter num";
	int x{  };
	int y{  };
	cin >> x;
	cout << "enter num";
	cin >> y;
	cout << x << "^" << y << " = ";
	cout<< (doexor(x, y));
	getchar();
	getchar();
}