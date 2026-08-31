class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n= customers.size();
        int m= grumpy.size();
        int k = minutes;
        int prevloss =0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevloss += customers[i];
        }
         int maxloss = prevloss;
         int maxidx = 0;
         int i = 1;
         int j = k;
         while(j<n){
          int currloss = prevloss + ((grumpy[j]==1)? customers[j] : 0) - ((grumpy[i-1]==1)? customers[i-1] : 0) ;
          if (currloss > maxloss) {
            maxloss = currloss;
            maxidx = i;}
          prevloss = currloss;
          i++;
          j++;
         }
        for(int i=maxidx;i<maxidx+k;i++){
           if(grumpy[i]==1)  grumpy[i] = 0;
        }
        int maxsum = 0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) maxsum += customers[i];
        }
        return maxsum;
    }
};