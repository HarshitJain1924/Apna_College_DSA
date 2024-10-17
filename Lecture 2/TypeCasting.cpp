#include<iostream>
using namespace std;

int main()
{
    char grade = 'A';
    int value = grade; //Implicit Type Conversion
    cout<<value<<endl;

    double price = 100.99;
    int newPrice = (int)price; //Explicit Type Casting
    cout<<newPrice<<endl;
    return 0;
}




