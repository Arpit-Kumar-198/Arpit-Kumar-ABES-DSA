#include<iostream>
#include<queue>
#include<map>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }

    void topView(TreeNode* root) {
        queue<pair<TreeNode *, int>> q;   // node level
        map<int, int> m;    // level node

        q.push({root, 0});

        while (q.size() != 0)
        {
            pair<TreeNode *, int> p = q.front();
            TreeNode *temp = p.first;

            if(m.find(p.second) != m.end()){
                q.pop();
            }
            else{
                m[p.second] = temp->val;
                q.pop();
            }
            if(temp->left)
                q.push({temp->left, p.second - 1});
            if(temp->right)
                q.push({temp->right, p.second + 1});
        }

        cout << "Top view : ";
        for (auto it : m)
        {
            cout << it.second << " ";
        }
    }
};
void display(TreeNode* root){
        if(root == NULL)
            return;
        display(root->left);
        cout << root->val << " ";
        display(root->right);
    }
int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(8);

    root->right->right = new TreeNode(6);

    cout << "Inorder : ";
    display(root);
    cout << endl;

    root->topView(root);

    return 0;
}