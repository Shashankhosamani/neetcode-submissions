class LRUCache {
public:
 struct ListNode {
    int key;
    int val;
    ListNode* prev;
    ListNode* next;

    ListNode(int x,int y) : key(x), val(y), prev(nullptr), next(nullptr) {}
};
 unordered_map<int,ListNode*>map;
 int capacityg;
 ListNode* left;
 ListNode *right;

    LRUCache(int capacity) {
        capacityg=capacity;
        left=new ListNode(0,0);
        right=new ListNode(0,0);
        left->next=right;
        right->prev=left;
    }

    void remove(ListNode* node){
        ListNode *currprev=node->prev;
        ListNode *currnext=node->next;
        currprev->next=currnext;
        currnext->prev=currprev;
    }

    void insert(ListNode* node){
        ListNode *nextnode=left->next;
        node->prev=left;
        node->next=left->next;
        left->next=node;
        nextnode->prev=node;
    }
    
    int get(int key) {
        if(map.find(key)!=map.end()){
            auto it=map.find(key);
            remove(it->second);
            insert(it->second);
            return it->second->val;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(map.find(key)!=map.end()){
            auto it=map.find(key);
            ListNode* node=it->second;
            remove(node);
            node->val=value;
            insert(node);
        }
        else{
            ListNode* node=new ListNode(key,value);
            insert(node);
            map[key]=node;
            if(map.size()>capacityg){
                map.erase(right->prev->key);
                remove(right->prev);
            }
        }
        
    }
};
