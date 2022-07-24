//Take name, section, roll, marks, and password as input for all Student class from the user and set them to the array of Student.
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

void get_maks(){
    return english_marks;
    }
void set_password(){

    }
};
int main()
{
    int n;
    cin>>n;
    Student obj[n];

    for(int i=0;i<n;i++){
        cin>>obj[i].name>>obj[i].section>>obj[i].roll>>obj[i].marks>>obj[i].password;
    }

    for(int i=0;i<n;i++){
        cout<<obj[i].name<<obj[i].section<<obj[i].roll<<obj[i].marks<<obj[i].password;
    }
    return 0;
}
