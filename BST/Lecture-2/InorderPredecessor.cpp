// Morris Traversal Method 
// step 1 : go to left 
// step 2 : keep going right jb tk ja skte ho jo last node hoga vhi inorder predecessor hai 
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
    node* inorderPredecessor(node* root, int var){
        node* tgt = root;
        node *predecessor = NULL;
        while(tgt != NULL && var != tgt->val){
            if(var < tgt->val){
                tgt = tgt->left;
            }
            else{
                predecessor = tgt;
                tgt = tgt->right;
            }
        }
        
        if (tgt->left == NULL)
            return predecessor;
        tgt = tgt->left;
        while (tgt->right != NULL)
        {
            tgt = tgt->right;
        }
        return tgt;
    }
int main()
{
    // inorder of bst is sorted
    node *root = new node((10));
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 2);
    root = insertIntoBST(root, 8);
    root = insertIntoBST(root, 15);
    root = insertIntoBST(root, 25);
    root = insertIntoBST(root, 4);
    root = insertIntoBST(root, 12);
    root = insertIntoBST(root, 3);
    root = insertIntoBST(root, 13);

    display(root);
    cout << endl;

    node *inorderPredecessorNode = inorderPredecessor(root, 25); // 5
    if(inorderPredecessorNode) cout << inorderPredecessorNode->val << " ";
    else
        cout << "No predecessor";
    return 0;
}