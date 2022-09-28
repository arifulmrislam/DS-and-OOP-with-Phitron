#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj(n, vector<int>());
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(a);
        adj[b].push_back(b);
    }
    int k;
    cin >> k;
    cout<< adj[k].size()<<endl;
    return 0;
}