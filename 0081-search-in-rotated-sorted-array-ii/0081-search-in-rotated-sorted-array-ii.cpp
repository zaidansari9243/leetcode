class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int m = nums.size();
        int lo = 0;
        int hi = m - 1;
        while(lo <= hi ){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[lo]==nums[mid] && nums[hi]==nums[mid]){
                lo++;
                hi--;
                continue;
            }
            else if(nums[mid]>=nums[lo]){
                if(target<=nums[mid] && target >= nums[lo]) hi = mid - 1;
                else lo = mid + 1;
            }
            else {
                if(target>=nums[mid] && target <= nums[hi]) lo = mid + 1;
                else hi = mid-1;
            }
        }
        return false;
        
    }
};