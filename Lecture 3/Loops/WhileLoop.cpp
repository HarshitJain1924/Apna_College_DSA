#include <iostream>
using namespace std;

// Print numbers from 1 to n
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}