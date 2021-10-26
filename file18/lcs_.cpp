#include <iostream>
using namespace std;

int lcs(string x, string y, int n, int m){
    // Base condition
    if(n == 0 || m == 0){
        return 0;
    }

    // Choice diagram code
    if(x[n-1] == y[m-1]){
        return 1 + lcs(x, y, n-1, m-1);

    } else {
        return max(lcs(x, y, n, m-1), lcs(x, y, n-1, m));
    }
}

int main()
{
    string x = "abcdgh";
    string y =  "abedfhr";

    int result = lcs(x, y, x.length(), y.length());
    cout<< "The longest common subsequence is/are: "<<result<<endl;

    return 0;
}