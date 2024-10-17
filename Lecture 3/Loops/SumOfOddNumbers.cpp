#include <iostream>
using namespace std;

// Print sum of odd numbers from 1 to n
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}