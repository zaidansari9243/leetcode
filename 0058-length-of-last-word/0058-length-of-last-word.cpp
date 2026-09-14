class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s[0] == '\0') return 0 ;
        reverse(s.begin(),s.end());
        int length=0;
        int i = 0;
        if(s[0] == ' ') {
            while(s[i] == ' '){
                i++;
            }
        }
        while(s[i] != ' ' && s[i] != '\0' ){
            length++;
            i++;
        }
        return length;
    }
};