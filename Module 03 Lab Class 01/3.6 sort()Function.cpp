#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n] = {5,4,2,1,3};
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
