// knapsack 0-1 problem using (recursive + memoziation)

#include <iostream>
#include <cstring>
using namespace std;


int knapscak01Problem(int wt[], int val[], int W, int size){
    int static t[5][10];
    memset(t, -1, sizeof(t));

    if(size == 0 || W == 0) return 0;

    if(t[size][W] != -1) return t[size][W];

    if(wt[size - 1] <= W){
        return t[size][W] = max(
            (val[size - 1] + knapscak01Problem(wt, val, W-wt[size - 1], size - 1)),
            knapscak01Problem(wt, val, W, size - 1)
            );
    } 

    else if(wt[size - 1] > W) return t[size][W] = knapscak01Problem(wt, val, W, size - 1);

    return -1; // it means someting went wrong
}

int main()
{


    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 7;
    int size = sizeof(wt) / sizeof(wt[0]);

    int max_profit = knapscak01Problem(wt, val, W, size);

    cout<< "The maximum profit is: "<<max_profit<<endl;

    return 0;
}