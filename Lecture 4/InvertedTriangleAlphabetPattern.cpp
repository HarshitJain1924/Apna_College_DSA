#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        //alphabets
        for (int j = 0; j < n - i; j++)
        {
            cout <<char(ch + i);
        }
        cout << endl;
    }
}