#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    n >= 0 ? cout << "Positive" : cout << "Negative";   //Ternary Statement
    return 0;
}