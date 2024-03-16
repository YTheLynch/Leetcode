class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxFreq = -1;
        for (int i: nums) {
            if (++mp[i] > maxFreq) {
                maxFreq = mp[i];
            } 
        }

        int count = 0;
        for (auto i: mp) {
            if (i.second == maxFreq) {
                count++;
            }
        }
        return count * maxFreq;
    }
};