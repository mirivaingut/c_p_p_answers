#include <iostream>
#include <bitset>
using namespace std;

inline int swap(int n) {
    return (((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1));
}

void main(){
    cout << "enter number: ";
    int n{};
    cin >> n;
    cout <<"\n"<< n << " in binary is " << bitset<32>(n) << "\n";
    n = swap(n);
    cout << n << " After Swapping in binary is " << bitset<32>(n) << "\n";
    getchar();
    getchar();
}