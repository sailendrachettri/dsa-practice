#include <iostream>
#include <queue>
using namespace std;

int KSmallestElement(int arr[], int k, int size){
    priority_queue <int> maxHeap;

    for (int i = 0; i < size; i++)
    {
        maxHeap.push(arr[i]);

        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();    
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15}; // sorted--> 3, 4, 7, 10, 15, 20
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 1;

    int element = KSmallestElement(arr, k, size);
    cout<< "The Kth Smallest Element is: "<<element<<endl;

    return 0;
}