class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(nums[i]<= 9) ans.push_back(nums[i]);
            else {
                int digit  = 0;
                vector<int> helper(0);
                while(nums[i]>0){
                digit = nums[i]%10;
                helper.push_back(digit);
                nums[i] = nums[i]/10;
            }
            reverse(helper.begin(),helper.end());
            for(int j=0 ; j<helper.size();j++){
                ans.push_back(helper[j]);

            }
            }
        }
        return ans;
    }
};