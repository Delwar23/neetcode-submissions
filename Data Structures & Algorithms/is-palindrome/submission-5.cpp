class Solution {
   public:
    bool isPalindrome(string s) {
        string ss = "";
        int i = 0, j = s.size() - 1;

        while (i <= j) {
            char c1, c2;
            while ((!isdigit(s[i]) && !isalpha(s[i])) && i < j) {
                i++;
            }

            if (isalpha(s[i])) {
                c1 = tolower(s[i]);
            } else {
                c1 = s[i];
            }

            while ((!isdigit(s[j]) && !isalpha(s[j])) && i < j) {
                j--;
            }

            if (isalpha(s[j])) {
                c2 = tolower(s[j]);
            } else {
                c2 = s[j];
            }

            if (c1 != c2 && i <= j) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
