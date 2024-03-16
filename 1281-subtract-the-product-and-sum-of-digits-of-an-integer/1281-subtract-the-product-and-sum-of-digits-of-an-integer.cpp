class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;
        for (; n; n /= 10) {
            int digi = n % 10;
            sum += digi;
            prod *= digi;
        }
        return prod - sum;
    }
};