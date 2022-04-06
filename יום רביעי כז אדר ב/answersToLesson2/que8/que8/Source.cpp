#include <iostream>
#include <string>
using namespace std;

void swap(char* ch1, char* ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void permutation(char* str, int stno, int endno)
{
    if (stno == endno)
        cout << str << "  ";
    else
    {
        for (int i = stno; i <= endno; i++)
        {
            swap((str + stno), (str + i));
            permutation(str, stno + 1, endno);
            swap((str + stno), (str + i));
        }
    }
}

int main()
{
    cout << "enter string\t";
    char str[255]{};
    cin.getline(str, size(str));
    cout << "\n\n Pointer : Generate permutations of your string :\n";
    cout << "--------------------------------------------------------\n";
    int len = strlen(str);
    cout << " The permutations of the string are : \n";
    permutation(str, 0, len - 1);
    return 0;
}
