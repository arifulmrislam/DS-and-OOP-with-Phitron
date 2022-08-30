#include <bits/stdc++.h>
using namespace std;

bool areBracketBalance(string std)
{

    stack<char> st;
    for (int i = 0; i < std.length(); i++)
    {
        if (st.empty())
        {
            st.push(std[i]);
        }
        else if ((st.top() == '(' && std[i] == ')') || (st.top() == '{' && std[i] == '}') || (st.top() == '[' && std[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(std[i]);
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string std;
        cin >> std;
        if (areBracketBalance(std))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}