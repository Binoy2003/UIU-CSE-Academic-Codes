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
void bubbleSort(int arr[], int lastDigit[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (lastDigit[j] > lastDigit[j + 1] || (lastDigit[j] == lastDigit[j + 1] && arr[j] > arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
                swap(lastDigit[j], lastDigit[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {105, 32, 88, 87, 19, 25, 40, 91, 57, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lastDigit[n];

    for (int i = 0; i < n; i++)
    {
        lastDigit[i] = arr[i] % 10;
    }

    bubbleSort(arr, lastDigit, n);
    printArray(arr, n);

    return 0;
}