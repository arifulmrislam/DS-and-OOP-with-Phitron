//swap using sort,
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,1,3,5,4},n=5;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
//                int temp = arr[i];
//                    arr[i] = arr[j];
//                    arr[j] = temp;
        //Using this build in function for swapping,
                    swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
