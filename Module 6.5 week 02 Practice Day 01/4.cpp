//Make the password private so that this can’t be accessed outside.
#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
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
    obs.password = "null_charecter";//it will not work;
    cout<<obs.password<<endl;
    return 0;
}
