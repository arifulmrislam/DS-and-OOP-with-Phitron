#include <bits/stdc++.h>
using namespace std;

void printMatrix(int *arr, int row, int col)
{
    for (int i = row-1; i >=0; i--)
    {
        for (int j = col-1; j >=0; j--)
        {
            cout << *((arr+i*col)+j) << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    printMatrix(*arr, row, col);
    return 0;
}