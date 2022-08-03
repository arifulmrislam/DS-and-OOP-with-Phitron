#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    int prf[5];

    prf[0] = arr[0];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    for(int i=0;i<n;i++){
        for(int j=2;j<n-2;j++){
            prf[i] = prf[j] - prf[i-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<prf[i]<<" ";
    }
    

    return 0;
}
