class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1f(26, 0);
        vector<int> s2f(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            s1f[s1[i] - 'a']++;
        }

        int left = 0;
        int windowlen = s1.length();
        int currwindow=0;
        for (int right = 0; right < s2.length(); right++) {
            s2f[s2[right]-'a']++;
            currwindow++;
            if(currwindow==windowlen && s1f!=s2f){
                s2f[s2[left]-'a']--;
                left++;
                currwindow--;
            }
            if(s1f == s2f) return true;

        }
        return false;
    }
};
