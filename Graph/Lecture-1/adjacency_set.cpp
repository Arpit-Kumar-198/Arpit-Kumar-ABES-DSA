#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<unordered_set<int>> graph;
int v;
void add_edge(int src,int dest, bool bi_dir = true){
    graph[src].insert(dest);
    if (bi_dir)
    {
        graph[dest].insert(src);
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

    graph.resize(v, unordered_set<int> ());
    int e;
    cin >> e; // no of edges
    while(e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d, true);
    }
    displayGraph();
    return 0;
}
