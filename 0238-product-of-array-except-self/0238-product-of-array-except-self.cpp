class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        int countzeros = 0; 
        for (int i: nums) {
            prod *= i;
            if (i == 0) {
                countzeros++;
            }
        }
        
        if (prod) {
            for (int i = 0; i < n; i++) {
                nums[i] = prod/nums[i];
            }
        } else {
            if (countzeros == 1) {
                int secondProd = 1;
                for (int i: nums) {
                    if (i != 0) secondProd *= i;
                }
                for (int i = 0; i < n; i++) {
                    if (nums[i] != 0) nums[i] = 0; 
                    else nums[i] = secondProd;
                }
            } else {
                vector<int> zeroOut(nums.size(), 0);
                return zeroOut;
            }
        }
        return nums;
    }
};