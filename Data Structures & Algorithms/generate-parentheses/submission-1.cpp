class Solution {
public:
    void solve(int n,int open,int close,string current,vector<string>& str){
        if(current.length()==2*n){
            str.push_back(current);
            return;
        }
        if(open<n){
            current.push_back('(');
            solve(n,open+1,close,current,str);
            current.pop_back();
        }

        if(close<open){
            current.push_back(')');
            solve(n,open,close+1,current,str);
            current.pop_back();
        }
        return;
        
    }

    vector<string> generateParenthesis(int n) {
        vector<string> str;
        string current;
        solve(n,0,0,current,str);
        return str;
    }
};
