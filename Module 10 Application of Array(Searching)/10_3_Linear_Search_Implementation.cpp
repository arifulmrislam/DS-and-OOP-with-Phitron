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

    char c;
    cout << "Do you want to search: (Y/N)";
    cin >> c;

    while (toupper(c) == 'Y')
    {
        int checkvalue;
        cout << "Please enter the value you want to search: ";
        cin >> checkvalue;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == checkvalue)
            {
                flag = 1;
                cout << "Index No: " << i << " Position : " << i + 1 << endl;
            }
        }
        if (flag == 0)
            cout << "Not Found" << endl;

        cout << "Do you want to searching: (Y/N)";
        cin >> c;
    }

    return 0;
}