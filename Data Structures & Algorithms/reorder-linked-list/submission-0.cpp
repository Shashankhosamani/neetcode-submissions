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
    void reorderList(ListNode* head) {
        if (head != nullptr && head->next != nullptr) {
            ListNode* fast = head;
            ListNode* slow = head;
            ListNode* slowp = nullptr;
            while (fast != nullptr && fast->next != nullptr) {
                slowp = slow;
                slow = slow->next;
                fast = fast->next->next;
            }
            slowp->next = nullptr;
            ListNode* l2 = slow;
            ListNode* prev = nullptr;
            while (l2 != nullptr) {
                ListNode* newNode = l2->next;
                l2->next = prev;
                prev = l2;
                l2 = newNode;
            }
            ListNode* l1=head;
            l2 = prev;
            ListNode dummy(0);
            ListNode* temp = &dummy;

            while (l1 != nullptr && l2 != nullptr) {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;

                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }

            if (l1 != nullptr) {
                temp->next = l1;
            }

            if (l2 != nullptr) {
                temp->next = l2;
            }

            head = dummy.next;
        }
    }
};
