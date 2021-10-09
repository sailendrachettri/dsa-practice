#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void frequentSort(int arr[], int size){
    unordered_map<int, int> mp;
    priority_queue<pair<int, int>> maxHeap;

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    
    for(auto i = mp.begin(); i != mp.end(); i++){
        maxHeap.push({i->second, i->first});
    }

    while (maxHeap.size() > 0)
    {
        int freq = maxHeap.top().first;
        int elem = maxHeap.top().second;
        
        for (int i = 1; i <= freq; i++)
        {
            cout<<elem<<" ";
        }      
        maxHeap.pop();
    }  
}

int main()
{
    int arr[] = {1, 1, 1, 3, 2, 2, 4, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    frequentSort(arr, size);

    return 0;
}