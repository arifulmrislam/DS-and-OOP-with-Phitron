#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    
    if(n1!=n2 && n2!=n3 && n3!=n1){
        cout<<3;
    }
    else if(n1==n2 && n2==n3){
        cout<<1;
    }
    else if(n1==n2 || n2==n3 || n1==n3){
        cout<<2;
    }

    return 0;
}