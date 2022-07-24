//Operator overloading
#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example(int a)
    {
        x=a;
    }
//    Example operator +(Example obj)
//    {
//        //cout<<x+obj.x<<endl;//print result here.
//        Example ans(0);
//        ans.x=x+obj.x;
//        return ans;
//    }
    int operator +(Example obj)
    {
        return x+obj.x;
    }
};
int main()
{
    Example a(10),b(20),c(30);
    //Example ans=a+b+c;
    //cout<<ans.x<<endl;
    int ans=a+b;
    Example ansObj(ans);
    cout<<ansObj+c<<endl;
    return 0;
}

//Function overriding
class Parent{
public:
    void fun()
    {
        cout<<"Parent"<<endl;
    }
};

class Child: public Parent{
public:
    void fun()
    {
        cout<<"Child"<<endl;
    }

};
int main()
{
    Child obj;
    obj.fun();
    return 0;
}
















