#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 23, 9, 3, 1, 4, 12};
    int min = arr[0], max = 0, size = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if(arr[i] >= max){
            max = arr[i];
        }
        
        if(arr[i] <= min){
            min = arr[i];
        }   
    }

    // second method
    // int min = arr[0], max = 0, size = sizeof(arr)/ sizeof(arr[0]);
    // vector <int> arr = {2, 23, 9, 3, 1, 4, 12};
    // min = *min_element(arr.begin(), arr.end());
    // max = *max_element(arr.begin(), arr.end());

    cout<< "Max = "<< max<<endl;
    cout<< "Min = "<< min<<endl;
    



    return 0;
}