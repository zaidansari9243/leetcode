class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double window = 0;
        
        for(int i =0 ;i<k;i++){
            window += nums[i];
        }
        double maxwindow = window;
        for(int j = k ; j<n ;j++ ){
            window = window + nums[j] - nums[j-k];
            maxwindow = max(window,maxwindow);

        }
        return maxwindow/k;
        
    }
};