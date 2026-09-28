class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        int res;
        stack<int> st;
        int n = tokens.size();
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            } else {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                if (tokens[i] == "+") {
                    res = a + b;
                    st.push(res);
                }
                if (tokens[i] == "-") {
                    res = b-a;
                    st.push(res);
                }
                if (tokens[i] == "*") {
                    res = a * b;
                    st.push(res);
                }
                if (tokens[i] == "/") {
                    res = b / a;
                    st.push(res);
                }
            }
        }
        return st.top();
    }
};
