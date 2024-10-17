#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // Arithmetic Operators
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    // Increment and Decrement Operators/ Unary Operators
    cout << a++ << endl;
    cout << a-- << endl;
    cout << ++a << endl;
    cout << --a << endl;


    // Relational Operators
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // Logical Operators
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << !a << endl;

    return 0;
}
