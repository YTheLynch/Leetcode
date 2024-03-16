class Solution {
public:
    int pivotInteger(int n) {
        int tot_sum = (n * (n + 1))/2;
        for (int i = 1; i <= n; i++) {
            if ((i*(i + 1))/2 == tot_sum - ((i - 1)*(i))/2) {
                return i;
            }
        }
        return -1;
    }
};