#include <iostream>
#include <algorithm>
using namespace std;

string lcs(string x, string y, int n, int m){
    int i = n, j = m; string s = "";

    // step 1: initialization
    int t[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
             if(i == 0 || j == 0)  t[i][j] = 0;
        }
    }

    // step 2: Iterative code - choice diagram
    while (i > 0 and j > 0)
    {
        if(x[i-1] == y[j-1]){
            s.push_back(x[i-1]); // or y[j-1] both has same value
            i--;
            j--;

        } else {
            if(t[i][j-1] > t[i-1][j]) j--;
            else i--;
        }
    }

    // step 3: reverse the strng s then return
    reverse(s.begin(), s.end());
    return s; 
}

int main()
{
    string x = "abcdaf";
    string y = "abcbf";

    string result = lcs(x, y, x.length(), y.length());
    cout<< "The lcs is "<<result<<endl;

    return 0;
}
