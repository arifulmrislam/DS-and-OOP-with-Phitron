#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;      // declaring variable n
    cin >> n;   // taking input for n
    int arr[n]; // declaring array of size n

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking input for array
    }

    cout << "Before sorting: ";
    printArray(arr, n);
    cout << endl;

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        cout << endl << "i : " << i << " key : " << key << " " << endl;
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            printArray(arr, n);
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, n);
    }
    cout << endl;
    cout << "After sorting:  ";
    printArray(arr, n);
    cout << endl;

    return 0;
}