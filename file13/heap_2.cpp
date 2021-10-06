#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void KLargestElement(int arr[], int k, int size){
    priority_queue <int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < size; i++)
    {
        minHeap.push(arr[i]);

        if (minHeap.size() > k)
        {
            minHeap.pop();
        }        
    }
    
    while (minHeap.size() > 0)
    {
        cout<< "Elements are: "<<minHeap.top()<<endl;
        minHeap.pop();
    }   
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    KLargestElement(arr, k, size);

    return 0;
}