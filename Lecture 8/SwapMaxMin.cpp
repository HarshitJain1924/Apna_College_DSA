#include <iostream>
using namespace std;

int swapMaxMin(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
    return 0;
}
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    swapMaxMin(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}