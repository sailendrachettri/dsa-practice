#include <iostream>
#include <queue>
using namespace std;

int KthSmallest(int arr[], int k, int size){
    priority_queue<int> maxHeap;

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
    int arr[] = {1, 3, 12, 5, 15, 11}; // 1 3 5 11 12 15
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    

    int firstValue = KthSmallest(arr, k, size);
    cout<< "firstValue: "<<firstValue<<endl;

    k = 6;
    int secondValue = KthSmallest(arr, k, size);
    cout<< "secondvalue: "<<secondValue<<endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > firstValue && arr[i] < secondValue){
            sum += arr[i];
        }
    }

    cout<< "The sum between two indexes is "<<sum<<endl;
    

    return 0;
}