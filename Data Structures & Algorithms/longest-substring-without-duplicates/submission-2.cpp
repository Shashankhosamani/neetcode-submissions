class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,char> mp;
        int left=0;
        int maxLength=0;
        for(int right=0;right<s.length();right++){
            if(mp.find(s[right])!=mp.end()){
                while(mp.find(s[right])!=mp.end()){
                    mp.erase(s[left]);
                    left++;
                }
            }
            mp[s[right]]=s[right];
            maxLength= max(1+right-left,maxLength);
        }
        return maxLength;
    }
};
