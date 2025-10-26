#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
#include <queue>
#include <climits>
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

void bfs(int src, int dest, vector<int>& distance){
    queue<int> q;
    distance.resize(v, INT_MAX);
    distance[src] = 0;
    visited.insert(src);
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                distance[neighbour] = distance[curr] + 1;
            }
        }
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
        add_edge(s, d, true);
    }
    displayGraph();
    int x, y;
    cin >> x >> y;
    vector<int> distance;
    bfs(x, y, distance);

    for (int i = 1; i < distance.size(); i++)
        cout << "Distance from " << x << " to " << i << " : " << distance[i] << "\n";

    return 0;
}
