#include <iostream>
using namespace std;

int main()
{
    // First Approach
    // int n;
    // cin>>n;

    // int cnt = 0;
    // while (n > 0)
    // {
    //     if((n & 1) > 0) cnt++;
    //     n = n >> 1;
    // }
    // cout<< cnt<<endl;

    // Second Approach
    int n;
    cin>>n;
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n & (n - 1);
    }
    
    cout<< cnt<<endl;
        

    return 0;
}