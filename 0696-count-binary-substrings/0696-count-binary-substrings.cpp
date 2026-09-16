class Solution {
public:
    int countBinarySubstrings(string s) {
      int n = s.size();
      int ans = 0;
      int left = 0;
      int right= 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) right++;
        else{
            ans += min(left,right);
            left = right;
            right = 1;
        }
    }
    ans += min(left,right);
    return ans;
    }
};