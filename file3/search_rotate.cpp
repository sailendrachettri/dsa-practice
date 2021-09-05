#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int searchBinary(vector<int> arr, int size, int target)
{
    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = floor((low + high) / 2);

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int target = 2;

    vector<int> arr;
    arr = {1, 4, 2, 5};
    sort(arr.begin(), arr.end());
    int size = arr.size();

    // cout << "size: " << size << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int res = searchBinary(arr, size, target);
    // cout<<target<<" at index: "<<res<<endl;

    return 0;
}