class Solution {
public:
    vector<int> minOperations(string boxes) {
      vector<int> finalans;
      int n = boxes.length();
      for(int i =0;i<n;i++){
        int ans = 0;
        for(int j=0;j<n;j++){
            if(boxes[j]=='1') {
                ans += abs(j-i) ; 
            }
        }
        finalans.push_back(ans);
      } 
      return finalans;   
    }
};