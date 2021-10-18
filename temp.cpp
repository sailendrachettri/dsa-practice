#include <iostream>
using namespace std;

int main()
{
    int english, programming, maths, percentage;

    cout << "Enter the marks for english: ";
    cin >> english;

    cout << "Enter the marks for programming: ";
    cin >> programming;

    cout << "Enter the marks for maths: ";
    cin >> maths;

    percentage = (maths + english + programming) / 3;

    if (percentage > 90 and percentage <= 100)
    {
        cout << "You got A." << endl;
    }
    else if (percentage > 80 and percentage <= 90)
    {
        cout << "You got B." << endl;
    }
    else if (percentage > 70 and percentage <= 80)
    {
        cout << "You got C." << endl;
    }
    else if (percentage > 60 and percentage <= 70)
    {
        cout << "You got D." << endl;
    }
    else if (percentage > 50 and percentage <= 60)
    {
        cout << "You got E." << endl;
    }
    else if (percentage > 40 and percentage <= 50)
    {
        cout << "You got F." << endl;
    }
    else
        cout << "Better luck next time." << endl;

    return 0;
}