#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int src,int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int node, unordered_set<int>& st){
    st.insert(node);
    for(auto it : graph[node]){
        if(!st.count(it))
            dfs(it, st);
    }
}
int connectedComponents(vector<list<int>>& graph){
    // go to every vertex 
    // if we can start a dfs from a vertex , we got one more connected component
    int cnt = 0;
    unordered_set<int> st;
    for (int i = 0; i < v; i++)
    {
        if(st.count(i) == 0){
            cnt++;
            dfs(i, st);
        }
    }
    return cnt;
}
int main(){
    cin >> v;

    graph.resize(v, list<int>());
    int e;
    cin >> e; // no of edges
    while(e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false);
    }

    cout << "connected components : " << connectedComponents(graph);
    return 0;
}