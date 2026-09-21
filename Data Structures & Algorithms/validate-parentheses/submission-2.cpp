class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> stk;
        if(n==0) return true;
        if(n%2!=0) return false;
        char c;
        for(int i=0;i<n;i++){
            switch(s[i]){
                case ('('):
                case('{'):
                case('['): stk.push(s[i]);
                            break;
                case(')'):  if(stk.empty()) return false;
                            c=stk.top();
                            if(c!='(') return false;
                            else stk.pop();
                            break;
                case(']'):  if(stk.empty()) return false;
                            c=stk.top();
                            if(c!='[') return false;
                            else stk.pop();
                            break;
                case('}'):  if(stk.empty()) return false;
                            c=stk.top();
                            if(c!='{') return false;
                            else stk.pop();
                            break;
                default:  break;
            }
        }
        if(!stk.empty()) return false;
        return true; 
    }
};
