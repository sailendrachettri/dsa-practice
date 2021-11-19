#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n>>i;

    int f = 1;
    f = f << i;

    int res = n & f;    

    if(res == 0) cout<<"false"<<endl;
    else cout<<"True"<<endl;

    return 0;
}