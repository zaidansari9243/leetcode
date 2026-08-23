class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn= INT_MAX ;
        int mx = INT_MIN ;
        int n = nums.size();
        for(int i = 0 ;i<n;i++){
            if(nums[i]>mx) mx = nums[i];
            if(nums[i]<mn) mn = nums[i];
        }
        for(int j = min(mn,mx);j>=1;j--){
            if(mn%j==0 && mx%j==0) return j;
        }
        return 1;
    }
};