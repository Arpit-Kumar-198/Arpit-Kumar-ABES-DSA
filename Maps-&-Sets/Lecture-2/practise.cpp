#include<iostream>
#include<unordered_map>
#include<queue>
#include<climits>
#include<vector>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void fillMap(unordered_map<TreeNode *, TreeNode *> &m, TreeNode *root)
{
    if(root == NULL) return;
    if(root->left) m[root->left] = root;
    fillMap(m,root->left);
    if(root->right) m[root->right] = root;
    fillMap(m,root->right);
}
TreeNode* findStartRoot(TreeNode* root, int start){
    if(root == NULL) return NULL;
    if(root->val == start) return root;
    TreeNode* ans1 = findStartRoot(root->left, start);
    TreeNode* ans2 = findStartRoot(root->right, start);
    if(ans1 && ans1->val == start) return ans1;
    if(ans2 && ans2->val == start) return ans2;
    return NULL;
}
    int amountOfTime(TreeNode* root, int start) {
        int time = 0;
        unordered_map<TreeNode*, TreeNode*> m;
        fillMap(m,root); 

        TreeNode* startRoot = findStartRoot(root, start);
        queue<pair<TreeNode *, int>> q;
        q.push({startRoot, 0});

        unordered_map<TreeNode*, bool> isInfect;
        isInfect[startRoot] = true;
        while(!q.empty()){
            pair<TreeNode* , int> p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int level = p.second;

            int check = 0;
            if(node->left && (isInfect.find(node->left) == isInfect.end())) {
                if(check == 0) {
                    check = 1;
                    time += 1;
                }
                isInfect[node->left] = true;
                q.push({node->left,level+1});
            }
            if(node->right && (isInfect.find(node->left) == isInfect.end())) {
                if(check == 0) {
                    check = 1;
                    time += 1;
                }
                isInfect[node->right] = true;
                q.push({node->right,level+1});
            }
            if( (m.find(node) != m.end()) && (isInfect.find(m.find(node)->second) == isInfect.end()) ){
                if(check == 0) {
                    check = 1;
                    time += 1;
                }
                isInfect[m.find(node)->second] = true;
                q.push({m.find(node)->second,level+1});
            }
        }

        return time;

    }
TreeNode* createTree(vector<int>& arr){
        if(arr.size() == 0)
            return NULL;
        queue<TreeNode *> q;
        TreeNode *root = new TreeNode(arr[0]);

        q.push(root);
        int i = 1, j = 2;
        while(i, j < arr.size() && !q.empty()){
            TreeNode *temp = q.front();
            q.pop();

            TreeNode *l;
            TreeNode *r;

            if(i < arr.size() && arr[i] != INT_MAX){
                l = new TreeNode(arr[i]);
                temp->left = l;
            }
            else{
                l = NULL;
                temp->left = l;
            }
            if(j < arr.size() && arr[j] != INT_MAX){
                r = new TreeNode(arr[j]);
                temp->right = r;
            }
            else{
                r = NULL;
                temp->right = r;
            }
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            i += 2, j += 2;
        }
        return root;
}
int main(){
    vector<int> arr = {1,2,INT_MAX,3,INT_MAX,INT_MAX,4,6,5};
    TreeNode *root = createTree(arr);
    cout << amountOfTime(root, 3);
}