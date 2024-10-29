#include <iostream>
#include <climits>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "In Function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int original[5] = {1, 2, 3, 4, 5};
    int copy[5];
    
    // Copy contents of original to copy
    for (int i = 0; i < 5; i++) {
        copy[i] = original[i];
    }

    changeArr(copy, 5);  // Pass the copy

    cout << "In main (Original array)" << endl;
    for (int i = 0; i < sizeof(original) / 4; i++)
    {
        cout << original[i] << " ";  // Original array remains unchanged
    }
    cout << endl;

    cout << "In main (Modified copy)" << endl;
    for (int i = 0; i < sizeof(copy) / 4; i++)
    {
        cout << copy[i] << " ";  // Shows the modified copy
    }
    cout << endl;

    return 0;
}
