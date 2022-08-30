#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void insert(queue<int>&q, int k){
        q.push(k);
    }

    int findFrequency(queue<int> &q, int k){
        int n=q.size();
        int count=0;
        for(int i=0;i<=n;i++){
            if(q.front()==k)count++;
            q.push(q.front());
            q.pop();
        }
        return count;
    }
};