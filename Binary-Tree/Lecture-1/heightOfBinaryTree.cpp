#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    void display(Node* root){
        if(root == NULL) return;
        cout << root->val << " ";
        display(root->left);
        display(root->right);
    }
    int height(Node* root){
        if(root==NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        return 1+max(l,r);
    }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    Node* h = new Node(7);
    Node* i = new Node(7);
    Node* j = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    d->left = h;
    d->right = i;
    i->right = j;
    a->display(a);
    cout << endl;
    cout << "Height of tree : " << a->height(a);

    return 0;
}