#include <iostream>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    return (a < b); 
}

int main()
{
    int A = 9, B = 23, C = 20;

    int num1 =  min({A, B, C}, comp);
    cout<< "num1 = "<<num1<<endl;

    return 0;
}