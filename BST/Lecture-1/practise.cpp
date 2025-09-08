#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() {
        this->val = 0;
        this->left = nullptr;
        this->right = nullptr;
    }

    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }

    // Inorder Traversal
    void inorder(TreeNode* root) {
        if (root == nullptr)
            return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }

    // Preorder Traversal
    void preorder(TreeNode* root) {
        if (root == nullptr)
            return;
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
};

// Function to build tree from preorder and inorder
TreeNode* build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi) {
    if (prelo > prehi || inlo > inhi)
        return NULL;

    TreeNode *root = new TreeNode(pre[prelo]);

    int i = inlo;
    while (i <= inhi && in[i] != pre[prelo]) {
        i++;
    }

    int leftTreeSize = i - inlo;

    root->left = build(pre, prelo + 1, prelo + leftTreeSize, in, inlo, i - 1);
    root->right = build(pre, prelo + leftTreeSize + 1, prehi, in, i + 1, inhi);

    return root;
}
TreeNode* inorderPredecessor(TreeNode* root, int val){
    TreeNode *tgt = root;
    TreeNode *successor = NULL;
    while (tgt != NULL && tgt->val != val)
    {
        if(tgt->val > val) {
            successor = tgt;
            tgt = tgt->left;
        }
        else{
            tgt = tgt->right;
        }
    }

    if(tgt==NULL) {
        return NULL;
    }
    if(tgt->right == NULL)
        return successor;
    tgt = tgt->right;
    while(tgt != NULL){
        successor = tgt;
        tgt = tgt->left;
        
    }
    return successor;
}
int main() {
    vector<int> pre = {10,5,2,4,3,8,20,15,12,13,25};
    vector<int> in = pre; // Will convert to inorder
    int n = pre.size();
    sort(in.begin(), in.end());

    TreeNode *root = build(pre, 0, n - 1, in, 0, n - 1);

    cout << "Inorder: ";
    root->inorder(root);
    cout << "\n";

    TreeNode *pred = inorderPredecessor(root, 25);
    if(pred) cout << pred->val << " ";
    else
        cout << "There is no Successor for this node" << " ";
    return 0;
}
