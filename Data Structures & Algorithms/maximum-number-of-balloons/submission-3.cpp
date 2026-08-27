class Solution {
   public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;

        for (int i = 0; i < text.size(); i++) {
            mp[text[i]]++;
        }
        string tep = "balloon";
        if (mp['l'] < 2 || mp['o'] < 2) return 0;
        int res = INT_MAX;
        for (int i = 0; i < tep.size(); i++) {
            res = min(mp[tep[i]], res);
        }

        res = min(res, (mp['l'] / 2));
        res = min(res, (mp['o'] / 2));
        return res;
    }
};