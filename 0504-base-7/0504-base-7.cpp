class Solution {
public:
    string convertToBase7(int num) {
        string str;
        if(num==0) return "0";
        vector<int> v;
        int val = num;
        if(num<0) num = (-1*num);
        while(num!=0){
            int b = num%7;
            v.push_back(b);
            num = num/7;
        }
        for(int x : v){
            str += to_string(x);
        }
        reverse(str.begin(),str.end());
        if(val < 0){ 
            str = "-" + str;
            return str;
        } 
        return str;
    }
};