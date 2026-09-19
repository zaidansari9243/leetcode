class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        while (k != 0) {
            int mn = INT_MAX;
            int mnidx = -1;
            for (int i = 0; i < n; i++) {
                if (nums[i] < mn) {
                    mn = nums[i];
                    mnidx = i;
                }
            }
            nums[mnidx] *= multiplier;
            k--;
        }
        return nums;
    }
};