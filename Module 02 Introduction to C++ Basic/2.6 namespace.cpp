#include<bits/stdc++.h>
using namespace std;

namespace one
{
    void fun1()
    {
        cout<<"I am a name"<<endl;
    }
}
namespace two
{
    void fun2()
    {
        cout<<"I am a name"<<endl;
    }
}
using namespace one;
using namespace two;
int main()
{
    fun1();
    fun2();
    return 0;
}
