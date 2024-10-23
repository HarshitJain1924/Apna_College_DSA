#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    unsigned int a = -10;
    cout << "unsigned int: " << a << endl;
    return 0;
}