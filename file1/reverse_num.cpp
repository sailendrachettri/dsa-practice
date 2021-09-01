#include <iostream>
using namespace std;

int rem = 0;
int reversedNumber = 0;
int main()
{
    int a = 123;

    while (a != 0)
    {
        rem = a % 10;
        
        reversedNumber = (reversedNumber * 10) + rem;
        a /= 10;
    }

    cout << reversedNumber;

    return 0;
}