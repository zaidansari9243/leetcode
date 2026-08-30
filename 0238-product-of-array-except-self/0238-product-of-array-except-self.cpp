class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prep(n);
        int p = nums[0];
        prep[0]=1;
        for(int i=1;i<n;i++){
            prep[i] =p;
            p *= nums[i];
        }
        p = nums[n-1];
        for(int i=n-2;i>=0;i--){
            prep[i] *= p;
            p *= nums[i];

        }
        return prep;
    }
};