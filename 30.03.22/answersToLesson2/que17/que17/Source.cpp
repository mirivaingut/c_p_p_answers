#include <iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void reverse(int* arr, int len) {
	for (int i = 0, j = len - 1; j > (len / 2), i < (len / 2); i++, j--) {
		swap((arr + i), (arr + j));
	}
}

int main() {
	int len{};
	cout << "Input the number of elements to store in the array(max 15) : ";
	cin >> len;
	int* arr = new int[len];
	cout << "	Input " << len << " number of elements in the array :\n";
	for (int i = 0; i < len; i++) {
		cout << "	element - " << i << " : ";
		cin >> arr[i];
	}
	reverse(arr, len);
	cout << "The elements of array in reverse order are :\n";
	for (int i = 0; i < len; i++) {
		cout << "	element - " << i << " : " << arr[i] << "\n";
	}

	return 0;
}