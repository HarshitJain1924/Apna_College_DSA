#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }

    return flag;
}

int main()
{
    int n = 4;
    if (isPrime(n) == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}