#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="arif";
    //string:: iterator it;
    //if we use "auto" keyword,then we don't need to use "iterator" keyword.
    for(auto it=st.begin(); it!=st.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
