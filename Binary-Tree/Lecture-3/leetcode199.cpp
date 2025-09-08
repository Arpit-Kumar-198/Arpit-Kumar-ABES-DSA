/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        else return (1 + max(height(root->left),height(root->right)));
    }
    void nthLevel(TreeNode* root, vector<int>& ans, int l,int x){
        if(root==NULL) return;
        if(x==l) ans[l] = root->val;
        nthLevel(root->left,ans,l,x+1);
        nthLevel(root->right,ans,l,x+1);
    }
        vector<int> rightSideView(TreeNode* root) {
           if(root==NULL) return {};
           int level = height(root)-1;
            vector<int> ans(level+1);
            for(int i = 0; i <= level; i++){
                nthLevel(root,ans,i,0);
            }
    
            return ans;
        }
    };