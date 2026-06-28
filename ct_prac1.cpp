#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap er age print kore nilam
                cout << "before swap : ";
                printArray(arr, n);

                // swap kora shuru
                cout << "swapping: " << arr[j] << " and " << arr[j + 1] << "\n";

                swap(arr[j], arr[j + 1]);
                swaps++;

                // swap er por print
                cout << "after swap : ";
                printArray(arr, n);
                cout << endl;
            }
        }
    }
    // sorted array
    cout << "sorted array : ";
    printArray(arr, n);

    cout << "total number of swaps : " << swaps << endl;
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}