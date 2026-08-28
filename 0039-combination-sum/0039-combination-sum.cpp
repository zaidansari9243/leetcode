class Solution {
public:
    void candidatesds(vector<vector<int>> &finalans,int idx,vector<int>& arr, int target,vector<int> &ds ){
        if(idx==arr.size()){
            if(target==0){
                finalans.push_back(ds);
                return;
            }
            else return;
        }
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            candidatesds(finalans,idx,arr,target-arr[idx],ds);
            ds.pop_back();

        }
        candidatesds(finalans,idx+1,arr,target,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalans;
        vector<int> ds;
        candidatesds(finalans,0,candidates,target,ds);
        return finalans;
    }
};