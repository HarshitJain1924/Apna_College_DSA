#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    cout << isPowerOfTwo(8) << endl;  // Output: 1 (true)
    cout << isPowerOfTwo(10) << endl; // Output: 0 (false)
    return 0;
}
