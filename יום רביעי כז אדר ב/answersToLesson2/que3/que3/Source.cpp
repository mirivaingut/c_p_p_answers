#include <iostream>;
using namespace std;
void main() {
	cout << "Pointer : Demonstrate the use of & and*operator :\n";
	cout << "--------------------------------------------------------\n";
	int m{ 300 };
	float fx{ 300.600006 };
	char cht='z' ;

	int* pm = &m;
	float* pfx = &fx;
	char* pcht = &cht;

	cout << "m = " << m << "\n";
	cout << "fx = " << fx << "\n";
	cout << "cht = " << cht << "\n\n";

	cout << "Using& operator :\n";
	cout << "---------------------- - \n";
	cout << "	address of m = " << &m << "\n";;
	cout << "	address of fx = " << &fx << "\n";;
	printf("	address of cht = %p\n\n",&cht);

	cout << "Using & and * operator :\n";
	cout << "---------------------------- -\n";
	cout << "	value at address of m = " << *(&m) << "\n";
	cout << "	value at address of fx = " << *(&fx) << "\n";
	cout << "	value at address of cht = " << cht << "\n\n";

	cout << "Using only pointer variable :\n";
	cout << "----------------------------------\n";
	cout << "	address of m = " << pm << "\n";
	cout << "	address of fx = " << pfx << "\n";
	printf( "	address of cht = %p\n",pcht);

	cout << "Using only pointer operator :\n";
	cout << "----------------------------------\n";
	cout << "	value at address of m = " << (*pm) << "\n";
	cout << "	value at address of fx = " << (*pfx) << "\n";
	cout << "	value at address of cht = " << (*pcht) << "\n";

	getchar();
	getchar();
}