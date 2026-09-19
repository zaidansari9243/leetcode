class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int sum = INT_MIN;
        for(int i=0;i<n;i++){
            int add = 0;
            for(int j=0;j<accounts[i].size();j++){
                add += accounts[i][j];
            }
            sum = max(sum,add);
        }
        return sum;
    }
};