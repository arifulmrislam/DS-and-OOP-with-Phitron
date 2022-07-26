#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1;
    cin >> size1;

    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;

    int size2;
    cin >> size2;
    int arr2[size2];
    for (int j = 0; j < size2; j++)
    {
        cin >> arr2[j];
    }

    int flag = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                cout << arr1[i] << " ";
            }
        }
    }
    if (flag == 0)
    {
        cout << "Empty set";
    }

    return 0;
}
