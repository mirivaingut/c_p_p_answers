#include <iostream>
using namespace std;

int* getMin(int* arr, int len) {
	int min{1000000000};
	int* pmin{};
	int i = 0;
	for (; i < len; i++){
		if (arr[i] < min) {
			min = arr[i];
			pmin = (arr+i);
		}
	}
	return pmin;
}

void swap(int* p1, int* p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void arraySort(int* arr, int len) {
	int* p{0};
	for (int i = 0; i < len; i++) {
		p = getMin((arr + i), len - i);
		swap(p, (arr + i));
	}
}

int main() {
	int len{};
	cout << "Test Data :\n";
	cout << "Input the number of elements to store in the array : ";
	cin >> len;
	cout << "\n	Input " << len << " number of elements in the array :\n";
	int* arr = new int[len];
	for (int i = 0; i < len; i++)
	{
		cout << "	element - " << i << " : ";
		cin >> arr[i];
	}
	arraySort(arr, len);
	cout << "The elements in the array after sorting :\n";
	for (int i = 0; i < len; i++)
	{
		cout << "	element - " << i << " : " << arr[i];
		cout << "\n";
	}
	return 0;
}