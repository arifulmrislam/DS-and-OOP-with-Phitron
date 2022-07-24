//Make name, section and roll as public so that these can be accessed outside.
#include<bits/stdc++.h>
using namespace std;

class Student
{
    int english_marks;
    string password;

public:
    string name;
    char section;
    int roll;
};
int main()
{
    Student obs;
    obs.name = "Ariful";
    cout<<obs.name<<endl;
    return 0;
}
