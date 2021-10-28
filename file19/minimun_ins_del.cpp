#include <iostream>
using namespace std;

int lcs(string x, string y, int n, int m){
    // step 1: initialization
    int t[n+1][m+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i == 0 || j == 0)  t[i][j] = 0;
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

void numberOfInsDel(string x, string y, int n, int m){
    cout<< "maximun number of insertion required is/are "<<m - lcs(x, y, n, m)<<endl;
    cout<< "maximun number of deletion required is/are "<<n - lcs(x, y, n, m)<<endl;
}

int main()
{
    string x = "heap";
    string y = "pea";
    numberOfInsDel(x, y, x.length(), y.length());

    return 0;
}