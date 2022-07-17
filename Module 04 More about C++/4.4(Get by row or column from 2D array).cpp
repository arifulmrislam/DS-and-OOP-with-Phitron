#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
//    int req_col;//find the column index
//    cin>>req_col;
//    for(int i=0;i<row;i++){
//        cout<<a[i][req_col]<<" ";
//    }
    int req_row;//find the row index
    cin>>req_row;
    for(int i=0;i<col;i++){
        cout<<a[req_row][i]<<" ";//reg row constant.
    }

    return 0;
}
