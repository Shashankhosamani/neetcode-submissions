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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> elementList;
        for(auto c:lists){
            ListNode* cur=c;
            while(cur!=nullptr){
                elementList.push_back(cur->val);
                cur=cur->next;
            }

        }
        sort(elementList.begin(),elementList.end());
        ListNode newList(0);
        ListNode* temp=&newList;
        for(auto i:elementList){
            ListNode* node=new ListNode(i);
            temp->next=node;
            temp=temp->next;
        }
        return newList.next;
    }
};
