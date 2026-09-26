class Solution {
public:
    string clearDigits(string s) {
        string str = "";
        stack<char> st;
        for(char c : s){
            if(st.size()>0 && (c>=48 && c<=57) ) /*digit*/{
                st.pop();
            }
            else st.push(c);
        }
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};