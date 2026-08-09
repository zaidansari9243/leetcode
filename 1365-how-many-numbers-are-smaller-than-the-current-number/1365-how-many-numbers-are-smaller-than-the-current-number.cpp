class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums){ 
        vector<int> v ;
       int m = nums.size();
        for(int i=0;i<m;i++){
           int count = 0;
            for(int j=0;j<m;j++){
                if(nums[j]<nums[i]){
                    count++;
                }    
         }
         v.push_back(count);
        }
        return v ;
    }
};