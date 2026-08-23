class Solution {
public:
    double myPow(double x, int n) {
        // if(n==1) return x;
        // if(n==(-1)) return 1/x;
        // if(n==(-2)) return 1/(x*x);
        // if(n==0) return 1;
        // double ans = myPow(x,n/2);
        // if (n%2==0 && n>0) return ans*ans;
        // else if(n%2==0 && n<0) return 1/(ans*ans);
        // else if(n%2==1 && n>0) return ans*ans*x ;
        // else return 1/(ans*ans*x);
        long long m;
        if (n < 0) m = -(long long)(n);
        else m = (long long )n;
        if(n==1) return x;
        if(n==0) return 1;
        double ans = myPow(x,m/2);
        if (n%2==0 && n>0) return ans*ans;
        else if(n%2==0 && n<0) return 1/(ans*ans);
        else if(n%2==1 && n>0) return ans*ans*x ;
        else return 1/(ans*ans*x);
    }
};