class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 1;
        while(i<n-1){
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) return nums[i];
            i++;
        }
        if(n==1) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[n-1] != nums[n-2]) return nums[n-1];
        return 0;
    }
};