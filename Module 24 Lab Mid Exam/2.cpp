#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr1[i] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != -1)
            cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}