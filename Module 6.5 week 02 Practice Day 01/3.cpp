//Make english_marks protected so that this can’t be accessed outside except the derived class.
#include<bits/stdc++.h>
using namespace std;

class Student
{
    string password;

protected:
    int english_marks;

public:
    string name;
    char section;
    int roll;
};
int main()
{
    Student obs;
    obs.english_marks = 70;//it will not work;
    cout<<obs.english_marks<<endl;
    return 0;
}
