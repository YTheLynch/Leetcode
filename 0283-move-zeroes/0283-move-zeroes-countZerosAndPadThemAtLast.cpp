class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int countZeros = 0; 
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) countZeros++;
            else {
                nums[k++] = nums[i];
            }
        }

        while (k < nums.size()) {
            nums[k++] = 0; 
        }
    }
};