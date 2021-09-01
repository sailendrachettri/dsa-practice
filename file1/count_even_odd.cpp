#include <iostream>
#include <iterator>
using namespace std;

void countOddEven(int arr[], int sizeof_array)
{
    int countOdd = 0;
    int countEven = 0;

    for (int i = 0; i < sizeof_array; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << countOdd << " " << countEven;
}
int main()
{
    int arr[] = {12, 3, 5, 7, 8, 9, 10, 12, 14};
    int sizeof_array =  sizeof(arr)/sizeof(arr[0]);
    // cout<< "size: "<<sizeof_array<<endl;

    countOddEven(arr, sizeof_array);

    return 0;
}