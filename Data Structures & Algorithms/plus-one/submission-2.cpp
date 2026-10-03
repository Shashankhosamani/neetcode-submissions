class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        stack<int> st;
        int carry = 1;
        for (int j = digits.size() - 1; j >= 0; j--) {
            int sum = digits[j] + carry;
            carry = sum / 10;
            result.push_back(sum % 10);
        }
        if(carry) result.push_back(carry);
        reverse(result.begin(), result.end());
        return result;
    }
};
