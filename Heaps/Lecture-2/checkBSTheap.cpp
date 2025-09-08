// check a bst is heap or not 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

 void levelOrder(Node* root){
        queue<Node*> q;
        q.push(root);
        while(q.size()>0){
            Node* temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << endl;
    }
int countNodes(Node* root){
    if(root==NULL)
        return 0;
    return 1+countNodes(root->left) + countNodes(root->right);
}
bool isCBT(Node* root, int idx, int n){
    if(root == NULL)
        return true;
    if(idx >= n)
        return false;
    return (isCBT(root->left, 2 * idx + 1, n) && isCBT(root->right, 2 * idx + 2, n));
}
bool isMax(Node* root){
    if(root==NULL)
        return true;
    if(root->left && root->val < root->left->val)
        return false;
    if(root->right && root->val < root->right->val)
        return false;
    return isMax(root->left) && isMax(root->right);
}
int main()
{
    Node *a = new Node(20);
    Node *b = new Node(16);
    Node *c = new Node(12);
    Node *d = new Node(10);
    Node *e = new Node(8);
    Node *f = new Node(5);
    Node *g = new Node(1);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    levelOrder(a);

    int totalNodes = countNodes(a);
    if (isCBT(a,0,totalNodes) && isMax(a))
    {
        cout << "BST is a Heap" << endl;
    }
    else
        cout << "BST is not a heap" << endl;
}
