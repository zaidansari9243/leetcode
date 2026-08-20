class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m = arr.size();
        int lo = 1;
        int hi = m - 2;
        int peak = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                peak = mid;
                break;
            } else if (arr[mid] < arr[mid - 1]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return peak;
    }
};