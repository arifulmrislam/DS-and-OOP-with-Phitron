#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int sum=0;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if(i % 2 == 0){
            sum = sum+arr[i];
        }
    }
    cout<<sum;
    return 0;
}