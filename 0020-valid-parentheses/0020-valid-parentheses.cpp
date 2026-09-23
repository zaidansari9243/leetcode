class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1) return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('|| s[i] == '[' || s[i] == '{') st.push(s[i]);
            else{ //s[i] == )
                if(st.size() == 0) return false;
                else if(s[i]==')' && st.top() != '(' || s[i]==']' && st.top() != '[' || s[i]=='}' && st.top() != '{' ) return false;
                else st.pop();
            }
           
        }
        if(st.size()==0) return true;
        else return false;
    }
};