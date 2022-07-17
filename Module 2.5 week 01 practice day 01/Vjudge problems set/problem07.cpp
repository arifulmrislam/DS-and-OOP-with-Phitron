#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    //cout<<A<<B<<C<<D;
    int num1 = A*B;
    int num2 = C*D;
    if(num1 == num2){
        cout<<num1;
    }
    else if(num1 > num2){
        cout<<num1;
    }
    else{
        cout<<num2;
    }
    return 0;
}
