class Solution { //length-prefix solution;
public:
    string encode(vector<string>& strs) {
        string res;

        for (string& str : strs) {
            res += to_string(str.size()) + "#" + str;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            // String starts after '#'
            j++;

            res.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return res;
    }
};