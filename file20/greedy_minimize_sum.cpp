#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Case 1
    int mid, size, sum = 0;
    int arr[] = {1, 2, 9, 2, 6};

    mid = (sizeof(arr) / sizeof(arr[0])) / 2;
    // cout<< "mid: "<<mid<<endl;
    size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    // cout<< "size: "<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        sum += abs(arr[i] - arr[mid]);
    }

    cout << "sum: " << sum << endl;

    // Case 2
    // int avg, size, sum = 0;
    // int arr[] = {1, 2, 9, 2, 6};
    
    // size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     sum += arr[i];
    // }
    // avg = sum/size;
    // cout<< "avg: "<<avg<<endl;
    
    // sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += (arr[i] - avg) * (arr[i] - avg);
    // }

    // cout << "sum: " << sum << endl;

    return 0;
}