#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible for driving license!";
    }
    else
    {
        cout << "You are not eligible for driving license!";
    }
    return 0;
}