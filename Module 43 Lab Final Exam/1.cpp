#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,c;
        cin>>n>>c;

        int array[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
            sum += array[i]*2;
        }
        if(c-sum>=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}