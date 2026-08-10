class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> bit;
        while (n > 0) {
            int p = n % 2;
            bit.push_back(p);
            n = n / 2;
        }
        reverse(bit.begin(), bit.end());
        int i = bit.size() - 2;
        int j = bit.size() - 1;
        while (i >= 0) {
            while (j > 0) {
                if (bit[i] == bit[j])
                    return false;
                j--;
                i--;
            }
            
        }
        return true;
    }
};