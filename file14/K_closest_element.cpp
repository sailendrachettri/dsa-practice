#include <iostream>
#include <queue>
using namespace std;

void kClosestElement(int arr[], int size, int k, int x){
    priority_queue <pair<int, int>> p;

    for (int i = 0; i < size; i++)
    {
        p.push({abs(arr[i] - x), arr[i]});

        if(p.size() > k){
            p.pop();
        }
    }

    while (p.size() > 0)
    {
        cout<<p.top().second<<" ";
        p.pop();
    } 
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int k = 3;

    kClosestElement(arr, size, k, x);

    return 0;
}