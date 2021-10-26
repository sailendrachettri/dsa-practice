#include <iostream>
using namespace std;

int lcs_top_down(string x, string y, int n, int m){
    // Step 1: Initialization of a matrix
    int t[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0) t[i][j] = 0;
        } 
    }

    // Step 2: Write iterative code - flow diagram
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1] == y[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i][j-1], t[i-1][j]);
        }
    }

    // Step 3: return the value
    return t[n][m];
}

int main()
{
    string x = "abceaf";
    string y = "abcdaf";

    int res = lcs_top_down(x, y, x.length(), y.length());
    cout<< "The lcs is "<<res<<endl;

    return 0;
}