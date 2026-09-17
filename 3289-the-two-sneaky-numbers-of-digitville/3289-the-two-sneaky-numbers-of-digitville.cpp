class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
      vector<int> count(n,0);
      for(int i=0;i<n;i++){
       count[nums[i]]++;
      }  
    vector<int> ans;
     for(int i=0;i<n;i++){
        if(count[i]==2) ans.push_back(i);
     }
     return ans;
    }
};