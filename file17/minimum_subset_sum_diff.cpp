#include <iostream>
#include <vector>
using namespace std;

int subsetSum(vector<int> v, int range){
    int s = range / 2; // sum of the vector
    int n = v.size(); // size of the vector

    int t[n+1][s+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < s+1; j++)
        {
            if(i == 0) t[i][j] = 0;
            if(j == 0) t[i][j] = 1;
        }
    }

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < s+1; j++)
        {
            if(v[i-1] <= j) t[i][j] = t[i-1][j- v[i-1]] || t[i-1][j];
            else t[i][j] = t[i-1][j];
        }
    }

    int i;
    for (int j = 0; j <= s; j++)
    {
        // cout<< t[n][j] <<endl;
        if(t[n][j]) i = j;
    }
    // cout<< range <<" "<< i <<" ";
    return(range - 2*i);   
}

int main()
{
    vector<int> v = {1, 2, 7};
    int range = 0;
    for (int i = 0; i < v.size(); i++)
    {
        range += v[i];
    }

    int minDiff = subsetSum(v, range);
    cout<< "The minimum different is "<<minDiff<<endl;

    return 0;
}