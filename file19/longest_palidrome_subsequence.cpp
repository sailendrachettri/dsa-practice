#include <iostream>
#include <algorithm>
using namespace std;

int lcs(string x, string y, int n, int m){
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
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(x[i-1] == y[j-1]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i][j-1], t[i-1][j]);
        }
    }

    // step 3: return the length of the lcs 
    return t[n][m];  
}

string reverseStr(string x){
    string y = x;
    reverse(y.begin(), y.end());
    return y;
}

int main()
{
    string x = "agbcbad";
    string y = reverseStr(x);
    cout<< "X: "<<x<<endl;
    cout<< "Y: "<<y<<endl;


    int lengthOfThePalindromeSubsequence = lcs(x, y, x.length(), y.length());
    cout<< "The length of the palindrome subsequence is "<<lengthOfThePalindromeSubsequence<<endl;

    return 0;
}