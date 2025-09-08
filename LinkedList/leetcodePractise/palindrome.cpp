/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp2 = head;
        ListNode* temp = temp2;
        temp2 = temp2->next;
        temp->next = NULL;
        while(temp2!=NULL){
            ListNode* t = temp2;
            temp2 = temp2->next;
            t->next = temp;
            temp = t;
        }
        return temp;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* c = new ListNode(-1);
        ListNode* pc = c;
        ListNode* temp = head;

        while(temp!=NULL){
            pc->next = new ListNode(temp->val);
            temp = temp->next;
            pc = pc->next;
        }
        ListNode* rev = reverseList(c->next);
         while(rev!=NULL && head!=NULL){
           if(rev->val!=head->val) return false;
           head = head->next;
           rev = rev->next;
        }
        return true;





        //2nd 

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newH = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b = newH;
        while(b!=NULL){ 
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;

    }
};