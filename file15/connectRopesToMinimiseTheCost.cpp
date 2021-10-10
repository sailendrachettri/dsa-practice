#include <iostream>
#include <queue>
using namespace std;

int connectRopesToMinimiseTheCost(int arr[], int size)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < size; i++)
    {
        minHeap.push(arr[i]);
    }

    int first, second, cost = 0;

    while (minHeap.size() >= 2)
    {
        first = minHeap.top();
        minHeap.pop();

        second = minHeap.top();
        minHeap.pop();

        cost = cost + first + second;
        minHeap.push(first + second);
    }
    
    return cost;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cost = connectRopesToMinimiseTheCost(arr, size);
    cout<< "The minimum cost is "<<cost<<endl;
    return 0;
}