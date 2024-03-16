class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        int bindigits = floor(log2(n)) + 1;
        
        
        return n ^ int(pow(2, bindigits) - 1);

    }
};