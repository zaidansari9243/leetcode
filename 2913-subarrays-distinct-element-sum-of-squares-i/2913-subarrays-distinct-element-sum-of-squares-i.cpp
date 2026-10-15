class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        
        int n = nums.size();
        int count = 0;
        for(int i = 0 ;i<n;i++){
            count = 0;
            vector<int> v(101,0);
            for(int j=i;j<n;j++){
                if(v[nums[j]]==0){
                    v[nums[j]] = 1;
                    count++;}
                sum += (count*count);
            }

        }
        return sum;
    }
};