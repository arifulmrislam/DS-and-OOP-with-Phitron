#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string arr)
{
    stack<char> temp;
    for (int i = 0; i < arr.length(); i++)
    {
        if (temp.empty())
        {
            temp.push(arr[i]);
        }
        else if ((temp.top() == '(' && arr[i] == ')') || (temp.top() == '{' && arr[i] == '}') || (temp.top() == '[' && arr[i] == ']'))
        {
            temp.pop();
        }
        else
        {
            temp.push(arr[i]);
        }
    }
    if (temp.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    string arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr;
        if(areBracketsBalanced(arr))
        cout << "Yes";
        else
        cout<< "No";
    }
    return 0;
}