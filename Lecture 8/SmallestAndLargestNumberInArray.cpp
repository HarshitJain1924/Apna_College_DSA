#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        // smallest = min(arr[0],smallest)
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        // largest = max(arr[0],largest)
    }

    cout << "smallest number: " << smallest << endl;  
    cout << "largest number: " << largest << endl;
}