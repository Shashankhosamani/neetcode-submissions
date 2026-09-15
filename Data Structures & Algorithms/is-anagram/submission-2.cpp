class Solution {
public:
    bool isAnagram(string s, string t) {
                int slen=s.size();
        int tlen=t.size();
        if(slen!=tlen){
            return false;
        } 
        unordered_map<char, int> spair;
        unordered_map<char, int> tpair;


        for(int i=0;i<s.size();i++){
                spair[s[i]]++;
                tpair[t[i]]++;
            }

        for(int i=0;i<s.size();i++){
                if(spair[s[i]]!=tpair[s[i]]){
                    return false;
                }
            }

        return true;  
    }
};
