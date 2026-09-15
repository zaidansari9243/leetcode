class Solution {
public:
    int scoreOfString(string s) {
        int x = 0;
        for(int i=0;i<s.size()-1;i++){
            int y = abs(int(s[i+1])-int(s[i]));
            x += y;
        }
        return x;
    }
};