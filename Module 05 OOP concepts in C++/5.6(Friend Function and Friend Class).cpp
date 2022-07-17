#include<bits/stdc++.h>
using namespace std;

class Parent
 {
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int ps)
    {
        taka=tk;
        password=ps;
    }
    friend class AbburBondhu;
 };
class AbburBondhu
{
public:
     void tellSecret(Parent *ptr)
     {
         cout<<ptr->password<<endl;
     }
 };
int main()
{
    Parent pt(1500,2345);
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);
    return 0;
}
