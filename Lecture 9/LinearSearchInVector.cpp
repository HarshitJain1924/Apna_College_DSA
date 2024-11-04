#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;

    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}