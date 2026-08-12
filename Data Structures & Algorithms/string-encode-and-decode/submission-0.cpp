class Solution {
   public:
    string encode(vector<string>& strs) {
        string s = "";
        for (int i = 0; i < strs.size(); i++) {
            s += strs[i];
            s += "$new#";
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string ss = "";
        cout << s << endl;

        for (int i = 0; i < s.size(); i++) {
            if (s.substr(i, 5) == "$new#") {
                res.push_back(ss);
                ss = "";
                i += 4;
            } else {
                ss += s[i];
            }
        }

        return res;
    }
};
