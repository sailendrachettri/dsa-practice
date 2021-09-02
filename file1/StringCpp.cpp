#include <iostream>
#include <string>
using namespace std;

int main()
{
//     string s = "Sailendra";
//    cout<< "Before: "<<s<<endl;

//    cout<< "After: "<<s<<endl;

    // string s;
    // getline(cin, s);
    // cout<< ""<<s<<endl;

    string i;
    cin>>i;

    //i = 35126857189658915618945186435701385018518957
    int l = i[i.size() - 1]; // it gives  ASCII value
    int l = i[i.size() - 1] - '0'; // it gives actual value
    cout<< "i = "<<i<<endl;
    cout<< "l = "<<l<<endl;

    


    return 0;
}