#include <iostream>
using namespace std;

int SumN(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << SumN(5) << endl;
    return 0;
}