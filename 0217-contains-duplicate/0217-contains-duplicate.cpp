class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false ; // no dupliate
        int n = nums.size();
        for(int i = 0 ; i<n-1;i++){
            if(nums[i]==nums[i+1]) flag = true;
        }
        if(flag==true ) return true;
        else return false;
    }
};