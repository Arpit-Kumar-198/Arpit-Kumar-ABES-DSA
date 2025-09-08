#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){
        this->val = 0;
        this -> left = NULL;
        this -> right = NULL;
    }
    TreeNode(int val){
        this->val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
    
};
void inorder(TreeNode* root){
        if(root == NULL) return;
        
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else{
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            else if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else{
                TreeNode* succ = root;
                succ = succ->right;
                while(succ->left != NULL) succ= succ->left;
                root->val = succ->val;
                root->right = deleteNode(root->right, succ->val);
            }
        }
        return root;
    }
int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(8);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(25);
    root->left->left->right = new TreeNode(4);
    root->right->left->left = new TreeNode(12);
    root->left->left->right->left = new TreeNode(3);
    root->right->left->left->right = new TreeNode(13);
    inorder(root);
    cout << endl;
    TreeNode *afterDeletion = deleteNode(root, 5);
    inorder(root);
    return 0;
}