#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i*=2)
    {
        if(i<=n)
        {
            count=i;
        }
    }
    cout<<count;
    return 0;
}

