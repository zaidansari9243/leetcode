class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs.size();
        if(m==1) return strs[0];
        sort(strs.begin(),strs.end());
        string p= strs[0]; //on first word of string
        string q= strs[m-1];// on last word of string
        string s="";
        for(int i=0;i<(min(p.size(),q.size()));i++){
            if(p[i]==q[i]){
                s += p[i]; //+ operator use to add in string s
            }
            else return s;
        }
        return s;
    }
};