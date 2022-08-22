#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

int globalID = 100;

class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = -1.0;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        id = globalID;
        globalID++;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    // Stack<pair<int, char>> st;

    // st.push(make_pair(1,'a'));
    // st.push(make_pair(2,'b'));
    // st.push(make_pair(3,'c'));

    // // while (!st.empty())
    // // {
    // //     cout << st.pop() << endl;
    // // }
    // cout << st.size() << endl;
    // if (!st.empty())
    // {
    //     pair<int, char> chk;
    //     chk = st.Top();
    //     cout << chk.first << " | " << chk.second << endl;
    // }
    // // cout << st.Top() << endl;

    Stack<person> st;
    person a("Ariful Islam", 654.6);
    person b("Nusrat Zahan", 644.6);
    person c("Zarif Islam", 655.6);
    st.push(a);
    st.push(b);
    st.push(c);

    // while (!st.empty())
    // {
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }

    // person printObj;
    // printObj = st.pop();
    // printObj.print();

    cout<<st.size()<<endl;
    return 0;
}