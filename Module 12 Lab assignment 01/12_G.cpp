#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int p1 = n % 10;
    int p2 = n / 100;
    if(p1 == p2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}