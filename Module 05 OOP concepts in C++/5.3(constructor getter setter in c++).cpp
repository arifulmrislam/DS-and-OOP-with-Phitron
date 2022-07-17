#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    int y;
    int z;
    Example(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};
int main()
{
    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;

    return 0;
}
