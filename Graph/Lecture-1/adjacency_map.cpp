#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<unordered_map<int,int>> graph;
int v;
void add_edge(int src,int dest,int wt, bool bi_dir = true){
    graph[src][dest] = wt;
    if (bi_dir)
    {
        graph[dest][src] = wt;
    }
}
void displayGraph(){
    for (int i = 0; i < graph.size(); i++){
        cout << i << " -> ";
        for (auto it : graph[i])
        {
            cout << "(" << it.first << "," << it.second << ")" << "   ";
        }
        cout << "\n";
    }
}
int main() {
    cin >> v;

    graph.resize(v, unordered_map<int,int> ());
    int e;
    cin >> e; // no of edges
    while(e--){
        int s, d, w;
        cin >> s >> d >> w;
        add_edge(s, d, w, true);
    }
    displayGraph();
    return 0;
}
