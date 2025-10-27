#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>>& arr, int sr, int sc, int color, int tgt){

    int m = arr.size(), n = arr[0].size();
    if(sr >= m || sc >= n || sr < 0 || sc < 0) return;
    if(arr[sr][sc] == color) return;
    if(arr[sr][sc] != tgt) return;
    
        arr[sr][sc] = color;
    
        helper(arr,sr,sc-1,color,tgt);
        helper(arr,sr,sc+1,color,tgt);
        helper(arr,sr-1,sc,color,tgt);
        helper(arr,sr+1,sc,color,tgt);
    
    return;
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int tgt = image[sr][sc];
        helper(image,sr,sc,color,tgt);
        return image;
}
int main(){
    // leetcode 733
    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    int n = image.size();
    int sr = 1, sc = 1;
    int color = 2;

    floodFill(image, sr, sc, color);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < image[0].size(); j++)
            cout << image[i][j] << " ";
        cout << "\n";
    }
        return 0;
}