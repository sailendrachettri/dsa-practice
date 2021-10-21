#include <iostream>
using namespace std;

int countSubset(int arr[], int n, int s){
    // Step 1: Initialization of matrix
    int t[n+1][s+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < s+1; j++)
        {
            if(i == 0) t[i][j] = 0;
            if(j == 0) t[i][j] = 1;
        }
    }

    // Step 2: Iterative Code
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < s+1; j++)
        {
            if(arr[i-1] <= j) t[i][j] = t[i-1][j - arr[i-1]] + t[i-1][j];
            else t[i][j] = t[i-1][j];
        }
    }

    // Step 3: return count
    return t[n][s];
}

int main()
{
    int arr[]  = {2, 3, 5, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    int count = countSubset(arr, size, sum);
    cout<< "The number of subset which sum is equls to "<<sum<< " is "<<count<<endl;

    return 0;
}