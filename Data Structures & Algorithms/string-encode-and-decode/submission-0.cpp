class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString;
        for(auto i:strs){
            string stringlen=to_string(i.length());
            encodedString=encodedString+stringlen+"#"+i;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
            vector<string> decodedStrings;
            string str="";
            string len="";
            int i=0;
            int j=0;
            while(i<s.length()){
                while(s[i]>='0' && s[i]<='9'){
                    len+=s[i];
                    i++;
                }
                i++;
                    int plen=stoi(len);
                    while(j<plen){
                        str+=s[i];
                        i++;
                        j++;
                    }
                    j=0;
                    decodedStrings.push_back(str);
                    str="";
                    len="";

            }
            return decodedStrings;
    }
};
