#include<bits/stdc++.h>
using namespace std;

int main(){
    char O[51], E[51];
    cin>>O>>E;


    for(int i=0, j=0; ; ){
        if(i<strlen(O)){
            cout<<O[i];
            i++;
        }
        if(j<strlen(E)){
            cout<<E[j];
            j++;
        }
        if((i==strlen(O))&&(j==strlen(E)))
            break;
    }

    return 0;
}
