#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val= val;
        this->next = NULL;
    }
};

void display(node* head){
    node* ptr = head;
    while(ptr != NULL){
      cout << ptr->val << " -> ";
      ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

//T.C. = O(n) and S.C. = O(n)

// void display(node* head){
//     if(head == NULL) {
//         cout << "NULL\n";
//         return;
//     }
//     cout << head->val << " -> ";
//     display(head->next);
// }
void displayReverse(node* head){
    if(head == NULL) return;

    displayReverse(head->next);
    cout << head->val << " -> ";
   
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    
    a->next = b;
    b->next = c;


    node* ptr = a;
  while(ptr != NULL){
    cout << ptr->val << " -> ";
    ptr = ptr->next;
  }
  cout << "NULL" << endl;

  display(a);
  displayReverse(a);
    return 0;
}