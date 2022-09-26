#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>M;
    M[3]= 9;
    M[4]= 12;
    M.insert(make_pair(1,4));
    cout<< "Key" << "|" << "value" << endl;
    for(auto i: M){
        cout<<i.first << " | " <<i.second << endl;
    } 
}