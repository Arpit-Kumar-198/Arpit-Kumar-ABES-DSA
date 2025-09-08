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
    void postorder(Node* root){
        vector<int> ans;
        stack<Node*> st;
        st.push(root);
        while(st.size()>0){
            Node* temp = st.top();
            st.pop();
            if(temp!=NULL) ans.push_back(temp->val);

            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);
        }
        for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << " ";
        cout << endl;
    }
    void display(Node* root){
        if(root == NULL) return;
        display(root->left);
        display(root->right);
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

    a->display(a);
    cout << endl;
    
    a->postorder(a);

    return 0;
}