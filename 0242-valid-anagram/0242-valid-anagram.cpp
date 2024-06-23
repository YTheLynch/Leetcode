class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        unordered_map <char, int> mps, mpt;
            
        for (int i = 0; i < s.size(); i++) {
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        for (auto it = mps.begin(); it != mps.end(); it++) {
            char key = it->first;
            if (mps[key] != mpt[key]) {
                return false;
            }
        }
        return true;
    }
};