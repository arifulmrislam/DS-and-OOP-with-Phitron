#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Given array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[50];
    int n;
    cin>>n;
    
    printArr(arr,n);

    return 0;
}