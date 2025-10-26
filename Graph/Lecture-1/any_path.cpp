#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
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

bool dfs(int curr, int end){
    if(curr == end)
        return true;
    visited.insert(curr); // mark visited
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            bool res = dfs(neighbour,end);
            if(res)
                return true;
        }
    }
    return false;
}
bool anyPath(int src, int dest){
    return dfs(src, dest);
}
int main() {
    cin >> v;

    graph.resize(v, list<int>());
    int e;
    cin >> e; // no of edges
    while(e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d, true);
    }
    displayGraph();
    int x, y;
    cin >> x >> y;
    // TC = O(V+E) , SC = O(V)
    if(anyPath(x,y)) cout << "Path exist between " << x << " and " << y << endl;
    else cout << "No path exist between " << x << " and " << y << endl;
    return 0;
}
