class Solution {
public:
    void candidatesds(vector<vector<int>>& finalans, int idx, vector<int>& arr,
                      int target, vector<int>& ds) {
        if (target == 0) {
            finalans.push_back(ds);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            candidatesds(finalans, i + 1, arr, target - arr[i], ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> finalans;
        vector<int> ds;
        candidatesds(finalans, 0, candidates, target, ds);
        return finalans;
    }
};
