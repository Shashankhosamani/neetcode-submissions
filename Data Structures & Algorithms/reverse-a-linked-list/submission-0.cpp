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
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* t=head;
        ListNode* tail=nullptr;
        while(t!=nullptr){
            ListNode* front=t->next;
            t->next=tail;
            tail=t;
            t=front;
        }
        return tail;



        
    }
};
