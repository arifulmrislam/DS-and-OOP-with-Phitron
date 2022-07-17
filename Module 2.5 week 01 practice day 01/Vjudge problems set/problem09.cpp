#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    //cout<<a<<b<<c;

    int num1 = b - a;
    int num2 = c - b;

    if(num1 == num2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
