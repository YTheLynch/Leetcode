class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1;
        int runsum = 0; 
        int ans = 0; 

        for (int i: nums) {
            runsum += i;
            if (count.find(runsum - goal) != count.end()) {
                ans += count[runsum - goal];
            }
            count[runsum]++;
        }

        return ans;
    }
};