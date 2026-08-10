class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int m = candies.size();
        int maxc = 0;
        for (int i = 0; i < m; i++) {
            if (candies[i] > maxc)
                maxc = candies[i];
        }
        for (int i = 0; i < m; i++) {
            if ((candies[i] + extraCandies) >= maxc)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};