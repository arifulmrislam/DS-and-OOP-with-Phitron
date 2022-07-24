#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="ab bc cd ef fg gh hi jk";
    stringstream stream(s);

    stream<<s;//to enter the word.
    string w;
    while(stream>>w && stream>>s)
    {
        //cout<<w<<endl;
        cout<<s<<endl;
    }
    return 0;
}
