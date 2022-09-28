#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long node = pow(2, n-1);
    long long int sum = node/2;
    long long d = sum*node;

    if(n==1) d=1;
    cout<< d << endl;

    return 0;
}