class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') sum += ((i+1)*26);
            else if(s[i]=='b') sum += ((i+1)*25);
            else if(s[i]=='c') sum += ((i+1)*24);
            else if(s[i]=='d') sum += ((i+1)*23);
            else if(s[i]=='e') sum += ((i+1)*22);
            else if(s[i]=='f') sum += ((i+1)*21);
            else if(s[i]=='g') sum += ((i+1)*20);
            else if(s[i]=='h') sum += ((i+1)*19);
            else if(s[i]=='i') sum += ((i+1)*18);
            else if(s[i]=='j') sum += ((i+1)*17);
            else if(s[i]=='k') sum += ((i+1)*16);
            else if(s[i]=='l') sum += ((i+1)*15);
            else if(s[i]=='m') sum += ((i+1)*14);
            else if(s[i]=='n') sum += ((i+1)*13);
            else if(s[i]=='o') sum += ((i+1)*12);
            else if(s[i]=='p') sum += ((i+1)*11);
            else if(s[i]=='q') sum += ((i+1)*10);
            else if(s[i]=='r') sum += ((i+1)*9);
            else if(s[i]=='s') sum += ((i+1)*8);
            else if(s[i]=='t') sum += ((i+1)*7);
            else if(s[i]=='u') sum += ((i+1)*6);
            else if(s[i]=='v') sum += ((i+1)*5);
            else if(s[i]=='w') sum += ((i+1)*4);
            else if(s[i]=='x') sum += ((i+1)*3);
            else if(s[i]=='y') sum += ((i+1)*2);
            else sum += (i+1);
        }
        return sum;
    }
};