#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src,int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void displayGraph(){
    for (int i = 0; i < graph.size(); i++){
        cout << i << " -> ";
        for (auto it : graph[i])
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}
int main() {
    cin >> v;

    graph.resize(v, list<int>());
    int e;
    cin >> e; // no of edges
    while(e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false);
    }
    displayGraph();
    return 0;
}
