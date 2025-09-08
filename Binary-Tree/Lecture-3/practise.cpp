#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<climits>
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

    void postorder(TreeNode* root){
        if(root == NULL)
            return;
        
        postorder(root->left);
        
        postorder(root->right);
        cout << root->val << " ";
    }
    int level(TreeNode* root){
        if(root == NULL)
            return 0;
        int l = level(root->left);
        int r = level(root->right);
        return 1 + max(l, r);
    }
    
    void PostorderIterative(TreeNode* root){
        stack<TreeNode *> s;
        stack<TreeNode *> s2;
        TreeNode *node = root;
        while (s.size() > 0 || node != NULL){
            if(node != NULL){
                s.push(node);
                s2.push(node);
                node = node->right;
            }
            else{
                TreeNode* temp = s.top();
                s.pop();
                node = temp->left;
            }
        }
        while(!s2.empty()){
            cout << s2.top()->val << " ";
            s2.pop();
        }
    }
};
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
int main()
{

    vector<int> arr = {1,2,INT_MAX,3,INT_MAX,INT_MAX,4,6,5};
    TreeNode *root = createTree(arr);
    cout << "Postorder recursive : ";
    root->postorder(root);
    cout << endl;

    cout << "Postorder iterative : ";
    root->PostorderIterative(root);

    return 0;
}