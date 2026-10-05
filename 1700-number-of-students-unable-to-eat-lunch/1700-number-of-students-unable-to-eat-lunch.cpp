class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> s;
        int n = students.size();
        for(int i=0;i<n;i++){
            s.push(students[i]);
        }
        int i = 0;
        int count = 0;
        while(s.size()>0 && count!=s.size()){
            if(s.front()==sandwiches[i]){
                    s.pop();
                    count = 0;
                    i++;
            }
            else{
                s.push(s.front());
                s.pop();
                count++;
            }
        }
        return s.size();
    }
};