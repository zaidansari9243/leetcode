class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int minidx = -1;
        int mx = INT_MIN;
        int maxidx = -1;
        for(int i = 0;i<n;i++){
            if(nums[i]<mn ) {
                mn = nums[i];
                minidx = i;}
            if(nums[i]>mx ) {
                mx= nums[i];
                maxidx = i ;}               
        }
       int a = min(minidx,maxidx);
       int b = max(minidx,maxidx);
        int bothLeft = b + 1;
        int bothRight = n - a;
        int oneEach = (a + 1) + (n - b);
       int c = min({bothLeft,bothRight,oneEach});
       return c;
    }
   
};