#include <iostream>
using namespace std;

int coinChangeII(int coin[], int n, int s)
{
    // step 1: initialization

    int t[n + 1][s + 1];
    for (int i = 0; i < s + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            if (i == 0)
                t[i][j] = INT16_MAX - 1;
            if (j == 0)
                t[i][j] = 0;
        }
    }

    // initialize 2nd row only
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < s + 1; j++)
        {
            if (j % coin[0] == 0)
                t[i][j] = j / coin[0];
            else
                t[i][j] = INT16_MAX - 1;
        }
    }

    // Step 2: iterative code
    for (int i = 2; i < n + 1; i++)
    {
        for (int j = 2; j < s + 1; j++)
        {
            if (coin[i - 1] <= j)
                t[i][j] = min(t[i][j - coin[i - 1]] + 1, t[i - 1][j]);

            else t[i][j] = t[i-1][j];
        }
    }

    // step 3: Return the minimum number ways
    return t[n][s];
}

int main()
{
    int coin[] = {1, 2, 3};
    int size = sizeof(coin) / sizeof(coin[0]);
    int sum = 5;

    int minimum_ways = coinChangeII(coin, size, sum);
    cout<< "The minimum number of ways is/are: "<<minimum_ways<<endl;

    return 0;
}