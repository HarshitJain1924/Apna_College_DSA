#include <bits/stdc++.h>
using namespace std;

int SumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int ProductArray(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }

    return product;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "Sum: " << SumArray(arr, size) << endl;
    cout << "Product: " << ProductArray(arr, size) << endl;
}