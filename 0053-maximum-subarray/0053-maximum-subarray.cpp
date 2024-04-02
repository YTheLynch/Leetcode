class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxend = 0, maxsum = INT_MIN; 
        
        for (int i: nums) {
            maxend += i;
            maxsum = max(maxend, maxsum);
            maxend = max(maxend, 0);
        }
        
        return maxsum;
    }
};