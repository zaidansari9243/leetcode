class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int esum = 0;
        int dsum = 0;
        for(int i =0;i<n;i++){
            esum += nums[i];
        }
        for(int j= 0;j<n;j++){
            if(nums[j]<=9) dsum += nums[j];
            else{
                int digit = 0;
                while(nums[j]>0){
                    digit = nums[j] % 10;
                    nums[j] = nums[j]/10;
                    dsum += digit;
                }
            }
        }
        return abs(esum - dsum);
    }
};