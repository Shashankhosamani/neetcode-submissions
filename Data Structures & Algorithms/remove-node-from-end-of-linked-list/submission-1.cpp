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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        ListNode dummy(0);
        ListNode *temp2=&dummy;
        temp2->next=head;
        for(int i=0;i<n;i++){
            temp=temp->next;
        }
        while(temp!=nullptr){
            temp2=temp2->next;
            temp=temp->next;
        }
        temp2->next=temp2->next->next;

        return dummy.next;

        
    }
};
