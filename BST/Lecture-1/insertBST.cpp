#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node *left;
    node *right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
node* insertIntoBST(node* root, int val) {
    if (root == NULL) return new node(val);
    if (val < root->val)
        root->left = insertIntoBST(root->left, val);
    else
        root->right = insertIntoBST(root->right, val);
    return root;
}

    void display(node* root){
        if(root == NULL) return;
        
        display(root->left);
        cout << root->val << " ";
        display(root->right);
    }
int main()
{
    // inorder of bst is sorted
    node *root = new node((10));
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 30);
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 6);
    root = insertIntoBST(root, 9);
    root = insertIntoBST(root, 15);

    display(root);

    return 0;
}