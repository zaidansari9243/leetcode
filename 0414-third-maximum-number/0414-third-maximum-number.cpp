class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long x1 = LLONG_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            x1 = max(x1,(long long)nums[i]);
        }
        long long x2 = LLONG_MIN;
        for(int i=0;i<n;i++){
           if((long long)nums[i] != x1) x2 = max(x2,(long long)nums[i]); 
        }
        long long x3 = LLONG_MIN;
        for(int i=0;i<n;i++){
           if( (long long)nums[i] != x1 && (long long)nums[i] != x2) x3 = max(x3,(long long)nums[i]); 
        }
        if(x3 == LLONG_MIN) return (int)(max(x1,x2));
        return (int)x3;
    }
};