class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> result(n,0);
        stack<pair<int,int>> st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({temperatures[i],i});
            }
            else{
                while(!st.empty() && st.top().first < temperatures[i]){
                    int top=st.top().second;
                    result[top]=i-top;
                    st.pop();
                }
                st.push({temperatures[i],i});
            }
        }
        return result;
    }
};
