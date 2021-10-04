// How to Use Hashmaps in C++?

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> ourmap;

    // ------------------------insert in unordered_map------------------------
    // pair<string, int> p("first", 1);
    // ourmap.insert(p);

    ourmap["first"] = 1;

    // --------------------------find our access--------------------------
    cout<<ourmap["first"]<<endl;
    // cout<<ourmap["second"]<<endl; // if it doesn't exist then it insert the default value i.e 0


    cout<< ourmap.at("first")<<endl;
    // cout<< ourmap.at("second")<<endl; // can't do this because we don't have that key

    // ----------------------check key is presense or not----------------------
    if(ourmap.count("first") > 0){
        cout<<"first is present"<<endl;
    }

    // ---------------------------check for size---------------------------
    cout<< "Size: "<<ourmap.size()<<endl;

    // -----------------------------erase an element-----------------------------
    ourmap.erase("second");

    if(ourmap.count("second") > 0){
        cout<<"second is present"<<endl;
    }


    return 0;
}