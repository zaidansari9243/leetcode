class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int prefix[n+1];//no. of n before kth hour
        int suffix[n+1];// n0. of y after and including kth hour
         prefix[0] = 0; 
        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i] + ((customers[i]=='N') ? 1 : 0);
        }
         suffix[n] = 0;
        for(int i=n-1;i>=0;i--){
            suffix[i] = suffix[i+1] +((customers[i]=='Y') ? 1 : 0);
        }
        int minhour = INT_MAX;
        for(int i = 0 ; i<=n;i++){
            prefix[i] += suffix[i];    
        }
        for(int i = 0 ; i<=n;i++){
          if(prefix[i]<minhour) minhour = prefix[i];
        }
        for(int i = 0 ; i<=n;i++){
          if(prefix[i]==minhour) return i;
        }   
        return n; 

    }

};