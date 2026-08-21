class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] >= nums[lo]) {
                mn = min(mn,nums[lo]);
                lo = mid+1;
                }
            else if (nums[mid] <= nums[hi]) {
                mn = min(mn,nums[mid]);
                hi=mid-1;
                }    
            else hi = mid-1;    
            }
        return mn; 
    }
};