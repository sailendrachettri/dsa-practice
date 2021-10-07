#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;    
}

void KSortedArray(int arr[], int k, int size){
    priority_queue <int, vector<int>, greater<int>> minHeap;

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        minHeap.push(arr[i]);

        if(minHeap.size() > k){
            arr[j] = minHeap.top();
            minHeap.pop();
            ++j;
        }
    }

    while (minHeap.size() > 0)
    {
        arr[j] = minHeap.top();
        minHeap.pop();
        ++j;
    }
    
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printArray(arr, size);
    KSortedArray(arr, k, size);
    printArray(arr, size);

    return 0;
}