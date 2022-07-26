#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, k = 0, flag = 0, count = 0;
    cin >> size;

    int arr1[size], arr2[size], arr3[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr2[k] = arr1[i];
            arr3[k] = 1;
            k++;
        }
        else
        {
            flag = 0;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}