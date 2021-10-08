#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void topKFrequentElements(vector<int> vec, int k){
    unordered_map<int, int> mp;
    priority_queue<pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> minHeap;

    for (int i = 0; i < vec.size(); i++)
    {
        mp[vec[i]]++;
    }
    
    for(auto i = mp.begin(); i != mp.end(); i++){
        minHeap.push({i->second, i->first});

        if(minHeap.size() > k){
            minHeap.pop();
        }
    }

    while (minHeap.size() > 0)
    {
        cout<< "Val:"<<minHeap.top().second<<" ";
        minHeap.pop();
    }  
}

int main()
{
    vector<int> vec = {1, 1, 1, 3, 2, 2, 4};
    int k = 2;

    topKFrequentElements(vec, k);

    return 0;
}