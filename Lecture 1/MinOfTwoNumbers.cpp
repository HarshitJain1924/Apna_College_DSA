#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b)
    {
        cout << a << " is the minimum of the two numbers." << endl;
    }
    else
    {
        cout << b << " is the minimum of the two numbers." << endl;
    }
    return 0;
}