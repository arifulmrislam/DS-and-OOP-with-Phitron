#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, max = 1, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i];
        }
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            int c = 1;
            while (i < n - 1 && arr[i] == arr[i + 1])
            {
                i++;
                c++;
                if (max < c)
                    max = c;
            }
        }
        if (max == 0)
            cout << n - 1 << endl;

        else
            cout << n - max << endl;
    }
    return 0;
}
