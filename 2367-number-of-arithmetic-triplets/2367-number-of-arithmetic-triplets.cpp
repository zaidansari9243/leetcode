class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int z = j + 1; z < n; z++) {
                    if (nums[j] - nums[i] == k &&
                        nums[z] - nums[j] == k) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};