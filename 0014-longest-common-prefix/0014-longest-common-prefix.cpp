class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs.size();
        if(m==1) return strs[0];
        sort(strs.begin(),strs.end());
        string p= strs[0];
        string q= strs[m-1];
        string s="";
        for(int i=0;i<(min(p.size(),q.size()));i++){
            if(p[i]==q[i]){
                s += p[i];
            }
            else return s;
        }
        return s;
    }
};