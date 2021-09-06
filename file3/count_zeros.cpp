#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            count++;
        }
    }

    cout<< "Number of zeros is/are: "<<count<<endl;
    
    

    return 0;
}