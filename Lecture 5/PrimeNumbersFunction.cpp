#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void PrintPrimeNumbers(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    PrintPrimeNumbers(20);
}