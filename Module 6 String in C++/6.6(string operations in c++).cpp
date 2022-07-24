#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="aaaabcdeffhijkl";
    cout<<st.find('k')<<endl;//search digit
    cout<<st.rfind('k')<<endl;//search digit
    cout<<st.find_first_of('k')<<endl;
    cout<<st.find_last_of('a')<<endl;
    cout<<st.find_first_not_of('b')<<endl;//not found
    cout<<st.find_last_not_of('b')<<endl;
    cout<<st.substr(2,5)<<endl;

    return 0;
}
