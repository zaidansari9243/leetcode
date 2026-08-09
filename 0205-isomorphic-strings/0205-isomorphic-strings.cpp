class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m != n) return false;
        vector <int> v(150,500);
        for(int i=0;i<m;i++){
            int idx = (int)s[i];
            if(v[idx]==500) v[idx] = s[i] - t[i];
            else if(v[idx]!=(s[i] - t[i]) ) return false;
        } 
        for(int i=0;i<150;i++){
            v[i]=500;
        }
        for(int i=0;i<n;i++){
            int idx = (int)t[i];
            if(v[idx]==500) v[idx] = t[i] - s[i];
            else if(v[idx]!=(t[i] - s[i]) ) return false;
        }  
        return true;      
    }
};