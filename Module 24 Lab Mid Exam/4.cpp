#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int arr[row][col];

    int Max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

            if(Max<arr[i][j]) Max=arr[i][j];
        }
    }

    int track[Max+1] = {0};
    int digit=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int k=arr[i][j];
            if(track[k]==0) cout<<" "<<arr[i][j]<<" ";
            else cout<<-1<<" ";
            track[k]=1;
        }
        cout<<endl;
    }
    return 0;
}