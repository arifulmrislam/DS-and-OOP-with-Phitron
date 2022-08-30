#include <bits/stdc++.h>
#include "MYQUEUE.h"
#include "MYSTACK.h"

using namespace std;

int main()
{
    Queue<int> q;
    Stack<int> Q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int str;
        cin >> str;
        q.push(str);
    }

    cout << endl
         << endl;

    while (!q.empty())
    {
        cout << q.pop() << endl;
    }

    while (!q.empty())
    {
        Q.push(q.Front());
        q.pop();
    }
    while(!Q.empty()){
        q.push(Q.Top());
        Q.pop();
    }
}