#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    reverseArray(arr, size);
}
