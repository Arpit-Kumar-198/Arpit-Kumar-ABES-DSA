// find sum of all the nodes of a tree
#include<iostream>
#include<climits>
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
    int MaxValue(Node* root){
        if(root == NULL) return 0;
        return max(root->val,max(MaxValue(root->left),MaxValue(root->right)));
    }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(40);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    a->display(a);
    cout << endl;
    cout << "Max value node : " << a->MaxValue(a) << endl;
    


    return 0;
}