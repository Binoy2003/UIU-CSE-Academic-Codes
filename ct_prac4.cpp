#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortSelectedIdx(int arr[], int idx[], int idxSize)
{
    // Checking for invalid indices
    for (int i = 0; i < idxSize; i++)
    {
        if (idx[i] < 0 || idx[i] >= idxSize)
        {
            cout << "Invalid index array." << endl;
            return;
        }
    }

    for (int i = 0; i < idxSize - 1; i++)
    {
        for (int j = 0; j < idxSize - i - 1; j++)
        {
            if (arr[idx[j]] > arr[idx[j + 1]])
            {
                swap(arr[idx[j]], arr[idx[j + 1]]);
            }
        }
    }
}

int main()
{
    int arr[] = {9, 100, 23, 45, 18, 21, 33, 3, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int idx[] = {1, 3, 4, 7, 8};
    int idxSize = sizeof(idx) / sizeof(idx[0]);

    sortSelectedIdx(arr, idx, idxSize);
    // cout << "data : ";
    printArray(arr, n);

    return 0;
}