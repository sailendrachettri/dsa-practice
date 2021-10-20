#include <iostream>
using namespace std;

int subsetSum(int arr[], int n, int W){
    // Step 1: initialization
    int t[n+1][W+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < W+1; j++)
        {
            if (i == 0) t[i][j] = false;            
            if (j == 0) t[i][j] = true;            
        }
    }

    // Iterative knapsack method
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < W+1; j++)
        {
            if (arr[i-1] <= j)
            {
                t[i][j] = (t[i-1][j - arr[i-1]] || t[i-1][j]);

            } else {
                t[i][j] = t[i-1][j];
            } 
        }
    }

    // Return T/F
    return t[n][W];
}

int main()
{
    int arr[] = {2, 3, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 11;

    int result = subsetSum(arr, size, sum);
    
    if (result == 1)
    {
        cout<< "Yes"<<endl;

    } else {
        cout<< "No"<<endl;
    }
    

    return 0;
}