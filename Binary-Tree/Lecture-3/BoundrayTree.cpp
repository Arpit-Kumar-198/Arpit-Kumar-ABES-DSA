#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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
    void helperLeft(Node* root){
        if(root->left == NULL && root->right == NULL) return;
        else if(root->left!=NULL) {
            cout << root->val << " ";
            helperLeft(root->left);
            return;
        }
        else if(root->right!=NULL){
            cout << root->val << " ";
            helperLeft(root->right);
            return;
        }

    }
    void helperRight(Node* root){
        if(root->left == NULL && root->right == NULL) return;
        else if(root->right!=NULL) {
            helperRight(root->right);
            cout << root->val << " ";
            return;
        }
        else if(root->left!=NULL){
            helperRight(root->left);
            cout << root->val << " ";
            return;
        }

        
    }
    void leafHelper(Node* root){
        if(root==NULL) return;
        leafHelper(root->left);
        if(root->left == NULL && root->right == NULL) {
            cout << root->val <<" ";
            return;
        }
        leafHelper(root->right);
    }
    void BoundrayNodes(Node* root){
        helperLeft(root);
        leafHelper(root);
        helperRight(root->right);
        
    }
    void display(Node* root){
        if(root == NULL) return;
        display(root->left);
        cout << root->val << " ";
        display(root->right);
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
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    Node* k = new Node(11);
    Node* l = new Node(12);
    Node* m = new Node(13);
    Node* n = new Node(14);
    Node* o = new Node(15);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = h;
    c->right = i;

    d->left = f;
    e->right = g;

    h->right = j;
    j->left = k;

    i->right = l;
    l->right = o;
    l->left = m;
    m->right = n;

    a->display(a);
    cout << endl;
    
    a->BoundrayNodes(a);

    return 0;
}