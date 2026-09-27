class MinStack {
public:
    MinStack() {

    }
        vector<int> st;
        vector <int> minSt;
    
    void push(int val) {
        int n=minSt.size();
        st.push_back(val);
        if(minSt.size()!=0){
            minSt.push_back(min(val,minSt[n-1]));
        }
        else{
            minSt.push_back(val);
        }
       
    }
    
    void pop() {
        st.pop_back();
        minSt.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minSt.back();
        
    }
};
