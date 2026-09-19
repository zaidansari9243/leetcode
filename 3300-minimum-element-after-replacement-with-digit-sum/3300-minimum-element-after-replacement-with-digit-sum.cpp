class Solution {
public:
    int minElement(vector<int>& nums) {
       int mn = INT_MAX;
       int n = nums.size();
       for(int i=0;i<n;i++){
        int sum = 0;
        while(nums[i]!=0){
            int digit = nums[i] % 10;
            sum += digit;
            nums[i]=nums[i]/10;
        }
        mn=min(mn,sum);
       } 
       return mn;
    }
};