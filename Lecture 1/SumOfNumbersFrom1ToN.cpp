#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0, count = 1;
    while (count <= n)
    {
        sum += count;
        count++;
    }
    cout << "The sum of numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}