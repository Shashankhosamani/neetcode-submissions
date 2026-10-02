class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (auto c : stones) {
            pq.push(c);
        }
        while (pq.size() > 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (x > y) {
                pq.push(x - y);
            } else {
                pq.push(y - x);
            }
        }
        return pq.top() ? pq.top() : 0;
    }
};
