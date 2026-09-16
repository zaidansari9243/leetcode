class Solution {
public:
    int maxDistinct(string s) {
        int n = s.length();
        int freq[26] = {0};
        int ans=0;
        for(int i=0;i<n;i++){
            int idx = s[i]-'a';
            freq[idx]++;
            if(freq[idx]==1){
                ans++;
            }
        }
        return ans;
    }
};