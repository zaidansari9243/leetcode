class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        stack<char> st;
        string ans="";
        while(i < word.length() && word[i]!=ch){
            st.push(word[i]);
            i++;
        }
        if (i == word.length()) return word;
        st.push(word[i]);
        while(st.size()>0){
           char x =  st.top();
           ans += x;
            st.pop();
        }
        for(int j=i+1;j<word.length();j++){
            ans += word[j];
        }
        return ans;
    }
};