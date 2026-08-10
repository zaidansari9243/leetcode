class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> res;
        int m = nums.size();
        int i =0;
        int j= (m/2);
        while(i<m/2 && j<m){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            i++;
            j++;
            
        }
        return res;

        
    }
};