class Solution {
   public:
    bool isPalindrome(string s) {
        string ss = "";
        int i = 0, j = s.size() - 1;

        while (i < j) {
            char c1, c2;
            if ((isalpha(s[i]))) {
                c1 = tolower(s[i]);
                // i++;
            } else if (isdigit(s[i])) {
                c1 = s[i];
            } else {
                while (i < j) {
                    if (isalpha(s[i])) {
                        c1 = tolower(s[i]);
                        // i++;
                        break;
                    } else if (isdigit(s[i])) {
                        c1 = s[i];
                        break;
                    } else {
                        i++;
                    }
                }
            }

            if (isalpha(s[j])) {
                c2 = tolower(s[j]);
                // j--;
            } else if (isdigit(s[j])) {
                c2 = s[j];
            } else {
                while (i < j) {
                    if (isalpha(s[j])) {
                        c2 = tolower(s[j]);
                        // j--;
                        break;
                    } else if (isdigit(s[j])) {
                        c2 = s[j];
                        break;
                    } else
                        j--;
                }
            }
            cout << c1 << ' ' << i << ' ' << c2 << ' ' << j << endl;
            if (c1 != c2 && i < j) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
