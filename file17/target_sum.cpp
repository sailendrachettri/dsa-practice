#include <iostream>
using namespace std;

int targetSum(int arr[], int n, int s){
    // step 1: initialization
    int t[n+1][s+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < s+1; j++)
        {
            if(i == 0) t[i][j] = false;
            if(j == 0) t[i][j] = true;
        }
    }

    // Step 2: Itreative code
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < s+1; j++)
        {
            if(arr[i-1] <= j) t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            else if(arr[i-1] > j) t[i][j] = t[i-1][j];
        } 
    }
    
    // Step 3: return the count
    return t[n][s];
}

int main()
{
    int arr[]  = {1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int diff = 2;

    int sumOfArr = 0;
    for (int i = 0; i < size; i++)
    {
        sumOfArr += i;
    }

    int sum = (diff + sumOfArr) / 2;

    int res = targetSum(arr, size, sum);
    cout<< "The target sum is "<<res<<endl;

    return 0;
}