class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<=j){
            char st=tolower(s[i]);
            char ed=tolower(s[j]);
            if((int(st) < 97 || int(st)>122) && (int(st)<48 || int(st)>57)){
                i++;
            }
            else if((int(ed) < 97 || int(ed)>122) && (int(ed)<48 || int(ed)>57)){
                j--;
            }
            else if(st==ed){
                i++;
                j--;
            }
            else{
                return false;
            }

        }
        return true; 
    }
};
