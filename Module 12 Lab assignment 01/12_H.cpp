#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    
    int p1 = st.find_first_of('A');
    int p2 = st.find_last_of('Z');
    int d = (p2 - p1)+1;
    cout<<d<<endl;
    return 0;
}