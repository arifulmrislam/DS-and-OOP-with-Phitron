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

    // insertion
    // size-1 ----> position
    int pos, val;
    cout << "Postion of the insertion : ";
    cin >> pos;
    cout << "Value of the insertion : ";
    cin >> val;

    if (pos < 0 || pos > n)
    {
        cout << "Invalid Insertion";
    }
    else
    {
/* swapping for sorting array. It will take more time complexity. We'll use this formula tof sorting array.
        for (int i = n - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = val;
*/

//If we don't need sorting array,then we will use this formula for insertion. It is less time complexity.
//n----->pos (5) ----->(2)  
        arr[n]=arr[pos];//insert arr[pos] to arr[n] size.
        arr[pos]=val;
    }
    cout<<"Array after the Insertion: ";
    printArr(arr, n+1);//Before call function, we need to increase the array size. 
    return 0;
}