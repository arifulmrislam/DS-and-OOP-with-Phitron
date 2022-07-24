#include<bits/stdc++.h>
using namespace std;

void print(int **x)
{
    **x = 2500;
}
int main()
{
    int num=100;
    int *p=&num;
    int **q=&p;
    print(q);
    cout<<num;

    return 0;
}
