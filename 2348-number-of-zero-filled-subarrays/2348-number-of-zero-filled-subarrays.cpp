class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        for(int i=0; i<nums.size(); i++){
            long long x = 0;  //number of consecutive zeros 
            while(i<nums.size() && nums[i]==0){
                i++;
                x++;
            }
            ans+=(x*(x+1)/2); // number of subarray 
        }
        return ans;
    }
};