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


int main(){
    node a(10);
    node b(20);
    node c(30);
    a.next = &b;
    b.next = &c;
   

  cout << &b << endl << a.next;
  cout << endl << a.val << " -> " << (a.next)->val << " -> " << (*(b.next)).val << " -> NULL" << endl;

    node* ptr = &a;
  while(ptr != NULL){
    cout << ptr->val << " -> ";
    ptr = ptr->next;
  }
  cout << "NULL";
    return 0;
}