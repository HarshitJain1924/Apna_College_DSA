#include <iostream>
using namespace std;

int MinOfTwo(int a, int b) //PARAMETERS
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << MinOfTwo(3, 4) << endl; //ARGUMENTS
    return 0;
}