class Solution {
public:
    int maxSubArray(vector<int>& arr) {
          int ans = -1000000;
        for(int i=1; i<arr.size(); i++){
            arr[i] = max(arr[i], arr[i]+arr[i-1]);
            if(arr[i]>ans)
                ans = arr[i];
        }
        return max(ans, arr[0]);                        
    }
};