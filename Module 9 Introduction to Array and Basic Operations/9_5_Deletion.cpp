#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[50];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given array: ";
    printArr(arr, n);
    // Deletion
    int pos;
    cout << "Deletion the position: ";
    cin >> pos;
    if (pos < 0 || pos > n)
    {
        cout << "Invalid Deletion";
    }

    else
    {
        if (pos == n - 1) //if we want to delete the first position.
            n--;
        else
        {
            for (int i = pos+1; i < n-1; i++) //if we want to delete the first or middle position of array. 
            {
                arr[i-1]=arr[i];
            }
            n--;
        }
    }

    cout << "Array after the Deletion: ";
    printArr(arr, n); // Before call function, we need to increase the array size.
    return 0;
}