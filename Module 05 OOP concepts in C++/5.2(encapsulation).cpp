#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int x;
    void sayHi()
    {
        cout<<"HI "<<x<<endl;
    }
private:
    int y;

protected:
    int z;
};

int main(){

    Student rahim;
    rahim.x=10;
    rahim.sayHi();
    rahim.y=20;
    rahim.z=30;
    return 0;
}
