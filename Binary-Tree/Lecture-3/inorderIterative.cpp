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
    void Inorder(Node* root){
        vector<int> ans;
        stack<Node*> st;
    
        Node* node = root;
        while( st.size()>0 || node!=NULL){
            if(node!=NULL) {
                st.push(node);
                node = node->left;
            }
           else{
                Node* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                
                node = temp->right;
           }
        }
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    a->display(a);
    cout << endl;
    
    a->Inorder(a);

    return 0;
}