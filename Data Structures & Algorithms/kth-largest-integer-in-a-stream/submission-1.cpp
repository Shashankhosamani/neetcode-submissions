class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>> pq;
int heapsize;
    KthLargest(int k, vector<int>& nums) {
        for(auto c: nums){
            pq.push(c);

            if (pq.size()>k){
                pq.pop();
            }
        }
        heapsize=k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>heapsize){
            pq.pop();
        }
        return pq.top();
    }
};
