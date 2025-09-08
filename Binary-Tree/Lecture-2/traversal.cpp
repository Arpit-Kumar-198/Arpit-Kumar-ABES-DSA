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
    void displayInorder(Node* root){
        if(root == NULL) return;
        displayInorder(root->left);
        cout << root->val << " ";
        displayInorder(root->right);
    }
    void displayPreorder(Node* root){
        if(root == NULL) return;
        cout << root->val << " ";
        displayPreorder(root->left);
        displayPreorder(root->right);
    }
    void displayPostorder(Node* root){
        if(root == NULL) return;
        displayPostorder(root->left);
        displayPostorder(root->right);
        cout << root->val << " ";
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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << "Inorder : ";
    a->displayInorder(a);
    cout << endl;

    cout << "Preorder : ";
    a->displayPreorder(a);
    cout << endl;

    cout << "Postorder : ";
    a->displayPostorder(a);
    cout << endl;


    return 0;
}