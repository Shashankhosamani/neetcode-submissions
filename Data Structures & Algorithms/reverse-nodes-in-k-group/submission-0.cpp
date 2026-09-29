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
   private:
    ListNode* reverseGroup(ListNode* &temp, ListNode*& prev, int k) {
        int count = 0;
        while (count < k) {
            ListNode*front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
            count++;
        }
        return  prev;  //this is new head of the grpup
    }

   public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* curr = head;
        ListNode* temp = head;

        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        int groups = count / k;
        int reversed = 0;
        ListNode* previousTail=nullptr;
        while (reversed < groups && groups >= 1) {
            ListNode *previousTemp=temp;
            ListNode* prev = nullptr;
            ListNode* groupHead=reverseGroup(temp, prev, k);
            if(reversed==0){
                head=groupHead;
            }
            else{
                previousTail->next=groupHead;
            }
            previousTail=previousTemp;
            reversed++;
        }
        previousTail->next=temp;
        return head;
    }
};
