/*Make a function named update_marks() in the Student class which will take a string password
and int marks as parameters and will check if the password matches with that student,
and set the marks to english_marks of that Student. If the password doesn’t match, show an error.
*/
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
void update_marks(string pass,int marks){
    if(pass == password){
        english_marks=m;
        cout<<"Update"<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
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
