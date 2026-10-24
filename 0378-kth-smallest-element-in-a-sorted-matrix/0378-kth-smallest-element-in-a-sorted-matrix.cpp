class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        vector<int>ans;
       
        for(int i=0;i<n;i++){
            for(int j =0;j<arr[i].size();j++){
                ans.push_back(arr[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k-1];
    }
};