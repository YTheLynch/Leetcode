class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum = 0;
        for (int i: nums) {
            totSum += i;
        }
        
        int sum = 0; 
        for (int i = 0; i < nums.size(); i++) {
            totSum -= nums[i];
            if (sum == totSum) {
                return i;
            } else {
                sum += nums[i];
            }
        }
        
        return -1;
    }
};