#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << char(ch + j - 1) << " ";
        }
        cout << endl;
    }
}
