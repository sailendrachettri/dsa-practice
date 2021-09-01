#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "123";
    int num;

    // using stoi() to store the value of str1 to x
    cout<< "Before: "<<typeid(str).name()<<endl;
    num = std::stoi(str);
    cout<< "After: "<<num<<endl;
    return 0;
}