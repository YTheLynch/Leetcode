class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 1;

        while (j < nums.size()) {
            if (nums[i] == 0 && nums[j] != 0) {
                swap(nums[i++], nums[j++]);
            } else if (nums[i] == 0 && nums[j] == 0) {
                while (nums[j] == 0 && j < nums.size() - 1) {
                    j++;
                }
                swap(nums[i++], nums[j++]);
            } else {
                i++;
                j++;
            }
        }
    }
};