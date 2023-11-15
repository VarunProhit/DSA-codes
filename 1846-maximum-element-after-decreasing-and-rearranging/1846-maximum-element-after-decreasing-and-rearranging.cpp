// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
//         sort(arr.begin(), arr.end());
//         int ans = 1;
        
//         for (int i = 1; i < arr.size(); i++) {
//             if (arr[i] >= ans + 1) {
//                 ans++;
//             }
//         }
        
//         return ans;
//     }
// };

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        vector<int> counts = vector(n + 1, 0);
        
        for (int num : arr) {
            counts[min(num, n)]++;
        }
        
        int ans = 1;
        for (int num = 2; num <= n; num++) {
            ans = min(ans + counts[num], num);
        }
        
        return ans;
    }
};