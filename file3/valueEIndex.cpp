#include <iostream>
#include <vector>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (i == arr[i-1])
        {
            v.push_back(i);
        }
            cout<< "i = "<<i <<" and arr[i] = "<<arr[i]<<endl;
    }
    return v;
}

int main()
{
    int arr[] = {15, 2, 45, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    auto ans = valueEqualToIndex(arr, size);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}