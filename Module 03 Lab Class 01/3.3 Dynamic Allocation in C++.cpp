#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int *p=(int*)malloc(10*sizeof(int));
//    for(int i=0;i<10;i++){
//        cout<<p[i]<<endl;

//    int *p=(int*)calloc(10,sizeof(int));
//    for(int i=0;i<10;i++){
//        cout<<p[i]<<endl;

//    int *p=(int*)calloc(10,sizeof(int));
//    for(int i=0;i<10;i++){
//        cout<<p[i]<<endl;
//    }
//    free(p);

    //Dynamic memory allocation with initialization
    int *ptr=new int[10]{1,2,3,4,5};
    for(int i=0;i<10;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete ptr;
    return 0;
}
