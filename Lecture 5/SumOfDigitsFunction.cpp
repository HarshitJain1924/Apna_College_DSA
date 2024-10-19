#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    int temp;
    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        sum += temp;
    }
    return sum;
}
int main()
{
    cout << "sum of digits: " << sumOfDigits(145) << endl;
}