#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        stack<char> m;
        queue<char> p;
        stack<char> q;
        queue<char> l;
        stack<char> u;
        int n;
        cin >> n;

        char ch;
        for (int i = 0; i < n; i++)
        {
            cin >> ch;

            p.push(ch);
        }
        while (!p.empty())
        {
            char s = p.front();
            p.pop();
            char t;
            if (q.empty()) // R
            {
                q.push(s);
                t = q.top();
            }

            else
            {

                if (s == 'R' && t == 'G' || s == 'G' && t == 'R')
                {

                    q.pop();
                    l.push('Y');
                }

                else if (s == 'R' && t == 'B' || s == 'B' && t == 'R')
                {
                    q.pop();
                    l.push('P');
                }

                else if (s == 'B' && t == 'G' || s == 'G' && t == 'B')
                {
                    q.pop();
                    l.push('C');
                }

                else if (s == q.top())
                {
                    q.pop();
                }
            }
        }

        while (!l.empty())
        {
            char n = l.front();
            l.pop();
            char t;
            if (m.empty())
            {
                m.push(n);
                t = m.top();
            }
            else
            {
                if (n == t)
                {
                    m.pop();
                    if (!m.empty())
                    {
                        t = m.top();
                    }
                }
                else if (n != t)
                {
                    m.push(n);
                    t = m.top();
                }
            }
        }

        while (!m.empty())
        {
            char p = m.top();
            m.pop();
            u.push(p);
        }
        while (!u.empty())
        {
            char p = u.top();
            u.pop();
            cout << p;
        }

        while (!q.empty())
        {
            char m = q.top();
            q.pop();
            cout << m;
        }
        cout << endl;
    }
}