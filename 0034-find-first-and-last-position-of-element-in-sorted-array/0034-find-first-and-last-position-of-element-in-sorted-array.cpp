class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v(2, -1);
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                v[0] = mid;
                hi = mid - 1;
            } else if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        lo = 0;
        hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                v[1] = mid;
                lo = mid + 1;
            } else if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        if (v[0] == -1 && v[1] == -1)
            return v;
        else
            return v;
    }
};