class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        stack<int> st;
        int carry = 0;
        for (int j = digits.size() - 1; j >= 0; j--) {
            int sum;
            if (j == digits.size() - 1) {
                sum = digits[j] + 1 + carry;
            } else {
                sum = digits[j] + carry;
            }
            carry = sum / 10;
            result.push_back(sum % 10);
        }
        if(carry) result.push_back(carry);
        reverse(result.begin(), result.end());
        return result;
    }
};
