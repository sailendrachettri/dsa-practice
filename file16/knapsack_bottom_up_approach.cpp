#include <iostream>
using namespace std;

int knapsack_bottom_up_approach(int wt[], int val[], int n, int W)
{
    // Step 1: initialization
    int t[n+1][W+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < W+1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }

    // Step 2: Convert recursive to iterative
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);

            } else {
                t[i][j] = t[i-1][j];
            }
        }
    }

    // Step 3: Return the value
    return t[n][W];
}

int main()
{
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 7;
    int size = sizeof(wt) / sizeof(wt[0]);

    int max_profit = knapsack_bottom_up_approach(wt, val, size, W);

    cout<< "The maximum profit is: "<<max_profit<<endl;

    return 0;
}