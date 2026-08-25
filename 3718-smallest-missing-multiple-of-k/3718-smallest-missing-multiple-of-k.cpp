class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int element = k;
        for(int x : nums){
            if(x==element){
                element += k;
            }
        }
        return element;
    }
};