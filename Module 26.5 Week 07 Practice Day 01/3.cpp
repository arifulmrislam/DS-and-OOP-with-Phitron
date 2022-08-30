#include <bits/stdc++.h>
using namespace std;

stack<int> sortstack(stack<int> &input)
{
    stack<int> tmpStack;

    while (!input.empty())
    {
        int temp = input.top();
        input.pop();

        while (tmpStack.empty() && tmpStack.top() > temp)
        {
            input.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(temp);
    }
    return tmpStack;
}

int main()
{
    stack<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        stack<int> tmpStack = sortStack(arr);
        cout << "Sorted numbers are:\n";

        while (!tmpStack.empty())
        {
            cout << tmpStack.top() << " ";
            tmpStack.pop();
        }
    }
}