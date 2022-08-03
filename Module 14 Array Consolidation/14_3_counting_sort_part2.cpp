#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    cout << "Before Sort:";
    printarray(arr, size);

    // step1:find the max number
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[size];
    }

    // step:2 initialization of count[];
    int count[max + 1];

    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }

    // step3:Frequency calculation
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    cout << "Frequrnce : ";
    printarray(count, max + 1);

    // step4:cumulatiuve sum calculation
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    cout << "cumulative sum : ";
    printarray(count, max + 1);

    // step5: final array --->Backward traversal of Basic array

    int final[size];
    for (int i = size - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        int k = count[arr[i]];
        final[k] = arr[i];
    }
    cout << "After sort: ";
    printarray(final, size);
    return 0;
}