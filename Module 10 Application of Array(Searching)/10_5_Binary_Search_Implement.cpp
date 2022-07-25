#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid((lb + ub) / 2);
        // x == arr[Mid]
        if (x == arr[mid])
            return mid; // center
        // x>arr[Mid]
        else if (x > arr[mid])
            binarySearch(arr, x, mid + 1, ub); // right
        // x<arr[Mid]
        else
            binarySearch(arr, x, lb, mid - 1); // left
    }
    else
        return -1;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int checkvalue;
    cout << "Enter the searching value: ";
    cin >> checkvalue;

    int indexnum = binarySearch(arr, checkvalue, 0, size);

    if (indexnum != -1)
    {
        cout << "Index No: " << indexnum <<"\t" "Position No: " << indexnum + 1 << endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}