#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int checkvaleu;
    cin >> checkvaleu;

    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == checkvaleu)
        {
            flag = 1;
            cout << "FOUND at index position: " << i;
        }
    }
    if (flag == 0)
    {
        cout << "Not Found";
    }

    return 0;
}