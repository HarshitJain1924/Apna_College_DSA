#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);

    cout << "Sum: " << sum << endl;
    return 0;
}