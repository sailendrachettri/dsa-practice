#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Sailendra";
    
    cout<< "size = "<<s.size()<<endl;
    cout<< "length = "<<s.length()<<endl;
    cout<< "max_size = "<<s.max_size()<<endl; // max size the variable can hold
    
    cout<< "reverse = "<<replace(s.begin(), s.end(), "S")<<endl;
    

    return 0;
}