class Solution {
public:
    string customSortString(string order, string s) {
        string res;
        for (int i = 0; i < order.length(); i++) {
            for (int j = 0; j < s.length(); j++) {
                if (order[i] == s[j]) {
                    res += s[j];
                }
            }
        }
        for (int i = 0; i < s.length(); i++) {
            bool present = false;
            for (int j = 0; j < order.length(); j++) {
                if (s[i] == order[j]) {
                    present = true;
                }
            }
            if (!present) res += s[i];
        }

        return res;
    }
};