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
    for(int i = 0;i<size;i++){
        if(arr[i] % 3 == 0){
            arr[i] = -1;
            //cout<<arr[i]<<" ";
        }
        cout<<arr[i]<<" ";
    }

    return 0;
}