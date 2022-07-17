#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K,X,Y,total=0;
    cin>>N>>K>>X>>Y;

    if(K>N){
        total = X*N;
    }
    else{
        total = ((K*X)+(N-K)*Y);
    }
    cout<<total<<endl;

    return 0;
}
