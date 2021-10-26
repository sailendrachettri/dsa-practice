#include <iostream>
#include <cstring>
using namespace std;

int static t[10+1][10+1]; // m+1 and n+1 (highest)

int lcs_memosize(string x, string y, int n, int m){

    //base condition
    if(n == 0 || m == 0){
        return 0;
    }

    // Checkig for valid input (or alrady filled or not)
    if(t[n][m] != -1) return t[n][m];

    // recursive + memosize code
    if(x[n-1] == y[m-1]) return t[n][m] = 1 +lcs_memosize(x, y, n-1, m-1);
    else return t[n][m] = max(lcs_memosize(x, y, n, m-1), lcs_memosize(x, y, n-1, m));
}

int main()
{
    memset(t, -1, sizeof(t));

    string x = "abcdgh";
    string y =  "abedfhr";

    int result = lcs_memosize(x, y, x.length(), y.length());
    cout<< "The longest common subsequence is/are: "<<result<<endl;

    return 0;
}
