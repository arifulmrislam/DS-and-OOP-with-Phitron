#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    int p=0;
    
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        if(arr[i]>=10)
        {
            p++;
        }
    }
    cout<<p<<endl;
    
    return 0;
}