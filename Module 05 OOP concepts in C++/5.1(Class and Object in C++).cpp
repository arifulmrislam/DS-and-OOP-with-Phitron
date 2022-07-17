#include<bits/stdc++.h>
using namespace std;

class Student
{
public://Access modifier/specifier
    char name[100];
    int roll;

};
int main()
{
    Student rahim;
    strcpy(rahim.name,"Rahim");
    rahim.roll = 01;

    cout<<rahim.name<<" "<<rahim.roll<<endl;
    return 0;
}
