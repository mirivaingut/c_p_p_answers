#include <iostream>
#include <string>
using namespace std;

void swap(char* p1, char* p2)
{
	char tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void reverse(char* arr, int len) {
	for (int i = 0, j = len - 1; j > (len / 2), i < (len / 2); i++, j--) {
		swap((arr + i), (arr + j));
	}
}

int main() {
	char str[255]{};
	cout << "Pointer: Print a string in reverse order :\n";
	cout << "------------------------------------------------\n";
	cout << "	Input a string : ";
	cin.getline(str, size(str));
	int len = strlen(str);
	reverse(str, len);
	cout << "	Reverse of the string is : " << str << "\n";
	return 0;
}