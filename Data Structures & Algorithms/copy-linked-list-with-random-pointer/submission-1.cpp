/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return head;
        Node* temp=head;
        Node newlist(0);
        Node* newlis = &newlist;
        unordered_map<Node*,Node*> map;
        while(temp!=nullptr){
            Node *newnode=new Node(temp->val);
            newlis->next=newnode;
            map[temp]=newnode;
            newlis=newlis->next;
            temp=temp->next;
            
        }
        Node* newli = newlist.next;
        while(head!=nullptr){
            newli->random=map[head->random];
            head=head->next;
            newli=newli->next;
        }
        return newlist.next;
    }
};
