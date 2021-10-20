#include <iostream>
using namespace std;

int subsetSum(int arr[], int sum, int n){
    int t[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i == 0) t[i][j] = false;
            if(j == 0) t[i][j] = true;
        }
    }

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if (arr[i-1] <= j)
            {
                t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);

            } else {
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];   
}

int equalSumPartition(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) sum = sum + arr[i];

    if(sum % 2 != 0) return false;
    else if (sum % 2 == 0)return subsetSum(arr, sum/2, n);

    return -1;
}

int main()
{
    int arr[] = {2, 4, 30, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = equalSumPartition(arr, size);
    cout<< "res: "<<res<<endl;

    if (res == 1)
    {
        cout<< "True"<<endl;

    } else {
        cout<< "False"<<endl;
    }
    

    return 0;
}