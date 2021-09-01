#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Chettri";
    string str2 = "irttehC";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < str1.length(); i++)
    {
        if(str1[i] != str2[i]){
            // return false;
            cout<< "False"<<endl;
        } else{
            // return true;
            cout<< "True"<<endl;
        }
    }
    

    

    return 0;
}