//Take roll, marks and password input from the user and find the Student that matches with the roll. If the Student is not found, show an error.
//Print all information except the password of all Student.
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

int set_marks(int e){
    english_marks=e;
    }
int set_password(string pass){
    password = pass;
    }
int get_Marks(){
    return english_marks;
}
void update_marks(string pass,int m){
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
        int a;
        string p;
        cin>>obj[i].name>>obj[i].section>>obj[i].roll>>a>>p;
        obj[i].set_marks(a);
        obj[i].set_password(p);
    }

    for(int i=0;i<n;i++){
        cout<<obj[i].name<<" "<<obj[i].section<<" "<<obj[i].roll<<" "<<obj[i].get_Marks()<<endl;
    }
    for(int i=0;i<n;i++){
        int m;
        string pass;
        cin>>pass>>m;
        obj[i].update_marks(pass,m);
    }
    return 0;
}
