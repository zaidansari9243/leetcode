class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
      int n = arr.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int z = j + 1; z < n; z++) {
                    if (abs(arr[i] - arr[j]) <= a &&
                        abs(arr[j] - arr[z]) <= b && abs(arr[i] - arr[z]) <= c) {
                        count++;
                    }
                }
            }
        }
        return count;  
    }
};