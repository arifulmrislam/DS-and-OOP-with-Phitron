#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(b);
    }
    int l;
    cin >> l;
    vector<bool> visited(n, false);
    queue<int> q;
    visited[0] = true;
    q.push(0);
    int level = 0;
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++){
            int u = q.front();
            q.pop();
            if(level==1)
            {
                cout<< u << " ";
            }
            for(auto element : adj[u])
            {
                int v = element;
                if(visited[v] != true)
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        level ++;
    }
    return 0;
}