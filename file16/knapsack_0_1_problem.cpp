// knapsack 0-1 problem using recursive

#include <iostream>
using namespace std;

int knapscak01Problem(int wt[], int val[], int W, int size){
    if(size == 0 || W == 0) return 0;

    if(wt[size - 1] <= W){
        return max(
            (val[size - 1] + knapscak01Problem(wt, val, W-wt[size - 1], size - 1)),
            knapscak01Problem(wt, val, W, size - 1)
            );
    } 

    else if(wt[size - 1] > W) return knapscak01Problem(wt, val, W, size - 1);

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