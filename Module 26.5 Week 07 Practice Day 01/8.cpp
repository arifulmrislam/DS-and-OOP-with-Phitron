#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Stack<int> std;
    Stack<int> minstd;

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)//min = 0;
        {
            minstd.push(arr[i]);
            min = arr[i];
        }
        std.push(arr[i]);
    }
    while (!std.empty())
    // if Top of minStack and std is equal
    {
        if (minstd.Top() != std.Top())
        {
            std.pop();
            cout << minstd.Top()<<" ";
        }
        //Else
        else{
            cout<<minstd.Top()<<" ";
            minstd.pop();
            std.pop();
        }
    }
}