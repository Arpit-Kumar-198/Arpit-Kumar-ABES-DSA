#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector< vector<int> > result;

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

void dfs(int curr, int end, vector<int>& path){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour,end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allPath(int src, int dest){
    vector<int> v;
    dfs(src, dest, v);
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
    allPath(x,y);
    for(auto it : result){
        for (int i = 0; i < it.size(); i++){
            if(i != it.size()-1) cout << it[i] << "->";
            else cout << it[i];
        }
        cout << "\n";
    }
    return 0;
}
