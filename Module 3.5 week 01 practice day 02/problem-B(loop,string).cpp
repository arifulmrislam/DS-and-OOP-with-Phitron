#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000000];
    cin>>arr;
    for(int i=0;i<strlen(arr);i++){
        if(i % 2 == 0){
            cout<<arr[i];
        }
    }
    return 0;
}
