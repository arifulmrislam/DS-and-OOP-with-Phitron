#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int arr[row][col];
//Declare a variable to find and save max.
    int Max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
// If user input is bigger than max then save new value into max
            if(Max<arr[i][j]) Max=arr[i][j];
        }
    }
//Declare an array with Max+1 size and initialize with 0;
    int track[Max+1]={0};
    int digit=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //cout<<arr[i][j]<<" ";
//Check k'th index in track is 0 or 1, if its 1 means its already printed, Otherwise its new
        int k=arr[i][j];
        if(track[k]==0) cout<<" "<<arr[i][j]<<" ";
        else cout<<-1<<" ";
        track[k]=1;//finally set track as 1 so that next time it doesn't print again
        }
        cout<<endl;
    }
    return 0;
}