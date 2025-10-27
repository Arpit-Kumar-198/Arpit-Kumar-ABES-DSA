class Solution {
public:
void dfs(int src, unordered_set<int>& visited,vector<vector<int>>& rooms){
    if(visited.count(src)) {
        return;
    }
    visited.insert(src);

    for(auto neigh : rooms[src]){
        if(!visited.count(neigh)) {
            dfs(neigh,visited,rooms);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        // queue<int> q;
        // q.push(0);
        // visited.insert(0);
        // while(!q.empty()){
        //     int curr = q.front();
        //     q.pop();
        //     for(int neigh : rooms[curr]){
        //         if(!visited.count(neigh)) {
        //             q.push(neigh);
        //             visited.insert(neigh);
        //         }
        //     }
        // }
        int n = rooms.size();
        dfs(0,visited,rooms);
        if(visited.size() == n) return true;
        return false;

    }
};