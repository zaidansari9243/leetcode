class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long lsm  = 0;
        long long rsm = 0;
        for(int i =0;i<n;i++){
            nums[i] = (nums[i]*nums[i]);
        }
         sort(nums.begin(),nums.end());
        for(int i =0 ; i<n/2;i++){
            lsm += nums[i];
        }
        for(int j=n/2; j<n;j++){
            rsm += nums[j];
        }
        return rsm-lsm;
    }
};