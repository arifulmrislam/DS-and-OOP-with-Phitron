#include <bits/stdc++.h>
#include "MYQUEUE.h"

using namespace std;

typedef pair<char, int> myType;

int main()
{
    Queue<myType> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c1;
        int c2;
        cin >> c1 >> c2;
        q.push(make_pair(c1, c2));
    }
    // while (!q.empty())
    // {
    //     myType chk;
    //     chk = q.pop();
    //     cout << chk.first << " | " << chk.second << endl;
    // }
    cout << endl
         << endl;
    if (!q.empty())
    {
        myType chk;
        chk = q.Front();
        cout << chk.first << " | " << chk.second << endl;
    }
    if (!q.empty())
    {
        myType chk;
        chk = q.Back();
        cout << chk.first << " | " << chk.second << endl;
    }
}