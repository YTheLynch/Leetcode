class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        
        int mid = low + (high - low)/2;
        int res = arr[mid];
        while (low < high) {
            if (arr[mid + 1] > res) {
                low = mid + 1;
            } else if (arr[mid - 1] > res) {
                high = mid - 1;
            } else {
                break;
            }          
            mid = low + (high - low)/2;
            res = arr[mid];
        }
        return mid;
    }
};