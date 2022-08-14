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
    friend void tellSecret(Parent *ptr);
 };

void tellSecret(Parent *ptr)
{
         cout<<ptr->taka<<" "<<ptr->password<<endl;
}
int main()
{
    Parent pt(1500,2345);
    tellSecret(&pt);
    return 0;
}


// Online C++ compiler to run C++ program online,friend class
#include <iostream>
using namespace std;

class A
{
    private:
        int id = 101;
        string name = "Ariful";

    public:
        friend class B;
};

class B
{
    public:
        void display(A ob)
        {
            cout<<ob.id<<endl;
            cout<<ob.name<<endl;
        }
};
int main() {
    A ob1;
    B ob2;

    ob2.display(ob1);
    return 0;
}

// Online C++ compiler to run C++ program online, friend function
#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;

    //friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0)   {}
};

//friend function defination
int addFive(Distance d) //d is a object
{
    d.meter +=5; //access private member
                //from the friend function
    return d.meter;
}

int main() {

    Distance D;
    cout<<"Distacne: "<<addFive(D);
    return 0;
}
