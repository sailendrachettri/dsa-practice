#include <iostream>
#include <queue>
using namespace std;

void kClosetPointToOrigin(int arr[][2], int size, int k)
{
    priority_queue<pair<int, pair<int, int>>> maxHeap;

    for (int i = 0; i < size; i++)
    {
        maxHeap.push({arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1], {arr[i][0], arr[i][1]}});

        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    while (maxHeap.size() > 0)
    {
        pair<int, int> p = maxHeap.top().second;

        cout << p.first << "," << p.second << endl;
        maxHeap.pop();
    }
}

int main()
{
    // int arr[][2] = {
    //                 {1, 3},
    //                 {2, -2},
    //                 {5, 8},
    //                 {0, 1}
    //                };
    // OR
    int arr[][2] = {{1, 3}, {-2, 2}, {5, 8}, {0, 1}};

    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    kClosetPointToOrigin(arr, size, k);

    return 0;
} 