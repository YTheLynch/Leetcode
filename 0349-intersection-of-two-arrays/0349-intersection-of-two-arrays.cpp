class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> st1;
        unordered_set <int> st2;
        for (int i: nums1) {
            st1.insert(i);
        }
        for (int i: nums2) {
            if (st1.count(i)) {
                st2.insert(i);
            }
        }
        

        vector<int> ans;
        for (int i: st2) {
            ans.push_back(i);
        }

        return ans;
    }
};