#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    //input array elements line by line 
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    //initialize k array with 0
    int k[N];
    for (int i = 0; i < N; i++)
        k[i] = 0;
    //loop for each element of array

    for (int i = 0; i < N; i++)
    {
        //if element is not counted
        if (k[i] == 0)
        {
            //count variable
            int count = 0;
            //loop for each element of array
            for (int j = i; j < N; j++)
                //if element is equal to arr[i]
                if (arr[j] == arr[i])
                {
                    //increase count
                    count += 1;
                    //mark element as counted
                    k[j] = 1;
                }
            //print element and its count
            cout << arr[i] << " => " << count << endl;
        }
    }

    return 0;
}
