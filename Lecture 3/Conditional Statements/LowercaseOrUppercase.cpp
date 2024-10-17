#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' || 65 && ch <= 'Z' || 90)
    {
        cout << "Uppercase" << endl;
    }
    else if (ch >= 'a' || 97 && ch <= 'z' || 122)
    {
        cout << "Lowercase" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}