#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //declaring the size of the matrix.
    cin >> n; //taking the size of the matrix.
    int arr[n][n]; //declaring the matrix.
    for (int i = 0; i < n; i++) //taking the elements of the matrix.
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0; //declaring the sum.
    for (int i = 0; i < n; i++) //adding the elements of the first half of the matrix.
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j <= n / 2)
            {
                sum += arr[i][j];
            }
            else if (i <= n - 1 && j == n / 2)
            {
                sum += arr[i][j];
            }
            else if (i == n - 1 && j > n / 2)
            {
                sum += arr[i][j];
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) //adding the elements of the second half of the matrix.
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= n / 2 && i == n - 1)
            {
                sum += arr[j][i];
            }
            else if (j == n / 2 && i >= 0)
            {
                sum += arr[j][i];
            }
            else if (j > n / 2 && i == 0)
            {
                sum += arr[j][i];
            }
        }
    }
    sum -= arr[n / 2][n / 2]; //subtracting the middle element.
    cout << sum << endl; //printing the sum.

    return 0;
}
