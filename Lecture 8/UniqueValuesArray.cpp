#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique values in the array are: ";
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
