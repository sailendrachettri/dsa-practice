#include <iostream>
using namespace std;

#define v 5

void addEdge(int graph[][v], int x, int y){
    graph[x][y] = 1;
}

int main()
{
    int graph[v][v] = {0};

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);

    cout<< "Adjacency matrix: "<<endl;

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout<< graph[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}