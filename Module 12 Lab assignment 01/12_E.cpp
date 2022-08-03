#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int tt = 1; tt <= t; tt++)
    {
        int n, q;
        scanf("%d%d", &n, &q);
        int arr[n];
        int l, m, k;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Case %d:\n", tt);
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &l);
            if (l == 1)
            {
                scanf("%d", &m);
                printf("%d\n", arr[m]);
                arr[m] = 0;
            }
            else if (l == 2)
            {
                scanf("%d%d", &m, &k);
                arr[m] += k;
            }
            else if (l == 3)
            {
                scanf("%d%d", &m, &k);
                int a = 0;
                for (; m <= k; m++)
                {
                    a += arr[m];
                }
                printf("%d\n", a);
            }
        }
    }
    return 0;
}
