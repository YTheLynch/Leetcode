class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int sl = 0, sr = 0, s_ = 0;
        for (char i: moves) {
            if (i == 'L') {
                sl++;
            } else if (i == 'R') {
                sr++;
            } else {
                s_++;
            }
        }
        return s_ + abs(sl - sr);
    }
};