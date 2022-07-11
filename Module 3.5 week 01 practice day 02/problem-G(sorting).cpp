#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr[n] - arr[1]<<endl;
    return 0;
}
