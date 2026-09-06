class Solution {
public:
    bool validDigit(int n, int x) {
        string str = to_string(n);
        if(str[0]-'0'==x) return false;
        for(int i =1;i<str.length();i++){
            if(str[i]-'0'==x) return true;
        }
        return false;
    }
};