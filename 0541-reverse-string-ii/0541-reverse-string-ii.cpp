class Solution {
public:
    string reverseStr(string s, int k) {
        string str;
        for(int i=0;i<s.length();i += 2*k){
            int j = i;
            int z = min(i+k-1,(int)s.length()-1);
            while(j<z){
                swap(s[j],s[z]);
                j++;
                z--;
            }
            
        }
        return s;
    }
};