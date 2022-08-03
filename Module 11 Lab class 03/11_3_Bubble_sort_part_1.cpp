#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n; //declaring variable n
    cin >> n; //taking input for n
    int arr[n]; //declaring array of size n

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //taking input for array
    }
    cout << "Before sorting: ";
    printArray(arr, n); //printing array before sorting
    cout << endl;

    for (int i = 1; i < n; i++) //outer loop, starting from 1, looping n-1 times
    {
        for (int j = 0; j < n - 1; j++) //inner loop, starting from 0, looping n-1 times
            if (arr[j] > arr[j + 1]) //if element at j is greater than element at j+1
            {
                int temp; //declaring temporary variable
                temp = arr[j]; //storing element at j in temp
                arr[j] = arr[j + 1]; //storing element at j+1 in arr[j]
                arr[j + 1] = temp; //storing element at temp in arr[j+1]
            }
    }
    cout << "After sorting: ";
    printArray(arr, n); //printing array after sorting
    return 0;
}