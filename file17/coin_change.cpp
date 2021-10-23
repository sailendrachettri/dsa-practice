#include <iostream>
using namespace std;

int coinChange(int coin[], int n, int s){
    // Step 1: Initialization
    int t[n+1][s+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < s+1; j++)
        {
            if(i == 0) t[i][j] = 0;
            if(j == 0) t[i][j] = 1;
        }
    }

    // Step 2: Iterative code
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < s+1; j++)
        {
            if(coin[i-1] <= j) t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
            else if(coin[i-1] > j) t[i][j] = t[i-1][j];
        }  
    }

    // Step 3: Return the number of ways
    return t[n][s];      
}

int main()
{
    int coin[]  = {1, 2, 3};
    int size = sizeof(coin) / sizeof(coin[0]);
    int sum = 5;

    int numberOfWays = coinChange(coin, size, sum);
    cout<< "The number of ways are "<<numberOfWays<<endl;

    return 0;
}