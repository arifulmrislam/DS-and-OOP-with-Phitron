#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, Q, D;
    cin >> T;
    for (int a = 0; a < T; a++)
    {
        cin >> N;
        int arr1[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr1[i];
        }
        int arr2[N];
        for (int j = 0; j < N; j++)
        {
            cin >> arr2[N];
        }
        int sum1 = 0;
        int sum2 = 0;
        cin >> Q;
        for (int i = 0; i < Q; i++)
        {
            cin >> D;
            for (int j = 0; j < D; j++)
            {
                sum1 += arr1[i];
                sum2 += arr2[i];
            }
            if (sum1 - sum2 > -1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }

        return 0;
    }
}


