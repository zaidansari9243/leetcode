class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string str = "";
        int depth = 0;
        for(char c : s){
            if(c == '('){
                if(depth>0) str += c;
                depth++;
            }
            else{
                depth--;
                if(depth != 0) str += c;  
            }
        }
        return str;
    }
};