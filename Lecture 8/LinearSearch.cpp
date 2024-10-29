#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 8;
    int arr[size] = {1, 2, 3, 4, 45, 46, 353, 343};
    int target;
    cout << "Target: ";
    cin >> target;

    cout << LinearSearch(arr, size, target) << endl;
    return 0;
}