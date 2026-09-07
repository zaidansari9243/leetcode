class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        for(int i =0;i<n;i++){
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < n; i++) {
            int rev = 0;
            while (nums[i] > 0) {
                int digit = nums[i] % 10;
                rev = rev * 10 + digit;
                nums[i] = nums[i] / 10;
            }
            ans.push_back(rev);
        }
        sort(ans.begin(),ans.end());
        int dis = 1;
        for(int i =0;i<2*n-1;i++){
            if(ans[i] != ans[i+1]) dis++;
        }
        return dis;
    }
};