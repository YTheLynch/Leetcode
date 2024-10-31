class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        
        for (int i: arr) {
            mp[i]++;
        }
        
        unordered_set<int> st;
        
        for (auto i: mp) {
            if (st.count(i.second) != 0) {
                return false;
            }
            st.insert(i.second);
        }
        
        return true;
    }
};