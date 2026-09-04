class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
    for(int i=0;i<n;i++){
        int leftmax = INT_MIN;
        int rightmin = INT_MAX;
        for(int j=0;j<=i;j++){
            leftmax = max(leftmax,nums[j]);
        }
        for(int k=i;k<n;k++){
            rightmin = min(rightmin,nums[k]);
        }
        if((leftmax - rightmin) <= k) return i;
    }
    return -1;
    }
};