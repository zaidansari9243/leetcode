class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> res;
        int m = nums.size();
        int sum = 0;
        for(int i = 0;i<m;i++){
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};