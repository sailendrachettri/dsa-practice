#include <iostream>
using namespace std;

int miz_hieght(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (k >= arr[i])
        {
            arr[i] += k;
        }
        else
        {
            arr[i] -= k;
        }
    }
    return (arr[size - 1] - arr[0]);
}

int main()
{
    int arr[] = {5, 5, 8, 6, 4, 10, 3, 8, 9, 10};
    int k = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< "Minimized height is: "<<miz_hieght(arr, size, k)<<endl;

    return 0;
}