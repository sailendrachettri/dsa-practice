#include <iostream>
using namespace std;

int longest_commom_substring(string x, string y, int n, int m){
    // step 1: initialization
    int t[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0) t[i][j] = 0;
        }
    }

    // step 2: iterative code
    int ans = 0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1] == y[j-1])  t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = 0;
            ans = max(ans, t[i][j]);
        }
    } 

    return ans;  
}

int main()
{
    string x = "abeaf";
    string y = "abecd";

    int res = longest_commom_substring(x, y, x.length(), y.length());
    cout<< "The longest commom substring  is "<<res<<endl;

    return 0;
}