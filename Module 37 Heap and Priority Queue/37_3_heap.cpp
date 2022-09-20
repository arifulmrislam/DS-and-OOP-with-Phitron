#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int current)
{
    int largest=current;
    int leftChild = 2 * current + 1;
    int rightChild = 2 * current + 2;

    if (leftChild < n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }
    if (rightChild < n && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }
    if (largest != current)
    {
        swap(arr[current], arr[largest]);
        heapify(arr, n, largest);
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before heapify: ";
    printArr(arr, n);
    // heapify
    int nonLeafStart = (n / 2) - 1;

    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "After heapify: ";
    printArr(arr, n);

    return 0;
}