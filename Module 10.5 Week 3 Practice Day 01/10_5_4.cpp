#include <iostream>
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

    int max = arr[0];
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    cout << "Max:" << max << ","<< "Index:" << max_index<<endl;
    cout << "Min:" << min << ","<< "Index:" << min_index;

    return 0;
}