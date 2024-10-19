#include <iostream>
using namespace std;

// Pass by value
int sum(int a, int b)
{
    a = a + 10;
    b = b + 20;
    return a + b;
}

int main()
{
    int a = 3;
    int b = 4;
    cout << sum(a, b) << endl;
    cout << a << " " << b << endl;
    return 0;
}