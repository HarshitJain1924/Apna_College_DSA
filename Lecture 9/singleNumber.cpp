#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};

    int ans = 0;
    for (char val : vec)
    {
        ans ^= val;
    }
    cout << ans;
}