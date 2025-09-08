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
    ListNode* insertAtBegin(ListNode* t, ListNode* temp){
    if(temp == NULL){
        t->next = NULL;
        return t;
    }
    t->next = temp;
    temp = t;
    return temp;
    }
public:

    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        head = head->next;
        temp->next = NULL;
        while(head!=NULL){
            ListNode* t = head;
            head = head->next;
            temp = insertAtBegin(t,temp);
            
        }
        return temp;

    }
};