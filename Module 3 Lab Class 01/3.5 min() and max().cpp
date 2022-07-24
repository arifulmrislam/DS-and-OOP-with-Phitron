//using min() and max() function,
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int a=100,b=500,mn;
//
//    mn=max(a,b);
//    cout<<mn<<endl;

    int arr[5] = {5,1,2,6,8};
    int mn = arr[0];
    for(int i=0;i<5;i++){
//        if(arr[i]<mn){
//            mn=arr[i];
//        }
        mn=max(mn,arr[i]);
    }
    cout<<mn<<endl;
    return 0;
}
