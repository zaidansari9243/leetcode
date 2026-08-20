class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long z = (long long)mid*mid;
            long long y = (long long)x;
            if(z==y) return mid;
            else if (z >y) hi = mid-1;
            else lo=mid+1;
        }
        return hi;
    }
};