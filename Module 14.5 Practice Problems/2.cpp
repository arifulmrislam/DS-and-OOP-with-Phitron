#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int digit;
    cout<<"Major diagonal: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                digit = a[i][j];
            }
        }
        cout<<digit<<" ";
    }
    cout<<endl;
    cout<<"Minor diagonal: ";
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i == j){
                digit = a[i][j];
            }
        }
        cout<<digit<<" ";
    }
    return 0;
}
