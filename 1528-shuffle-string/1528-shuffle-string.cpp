class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans ="";
        vector<char> helper(s.length(),'a');
        for(int i=0;i<s.size();i++){
            helper[indices[i]]=s[i];
        }
        for(int i=0;i<helper.size();i++){
            ans += helper[i];
        }
        return ans;
    }
};