#include <iostream>
using namespace std;

int rodCutting(int length[], int size, int price[], int N)
{
    // Step 1: Initialization
    int t[size + 1][N + 1];
    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            if (i == 0 || j == 0)
                t[i][j] = 0;
        }
    }

    // Step 2: Iterative code
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            if (length[i - 1] <= j)
                t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);
            else
                t[i][j] = t[i - 1][j];
        }
    }

    // Step 3: Return
    return t[size][N];
}

int main()
{
    int length[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(length) / sizeof(length[0]);
    int N = 8;

    int profit = rodCutting(length, size, price, N);
    cout << "The profit will be " << profit << endl;

    return 0;
}