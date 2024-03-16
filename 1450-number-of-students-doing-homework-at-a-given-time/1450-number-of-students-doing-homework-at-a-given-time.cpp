class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int res = 0;
        for (int i = 0; i < startTime.size(); i++) {
            if (endTime[i] >= queryTime) {
                if (startTime[i] <= queryTime) {
                    res++;
                }
            }
        }

        return res;
    }
};