#include <iostream>
using namespace std;

// print sum of even numbers from 1 to N

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "Sum: " << sum << endl;
}