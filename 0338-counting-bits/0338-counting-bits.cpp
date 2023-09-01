class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=1;i<=n;i++){
// we are declaring ans[i/2] because i/2 will have the same number of 1.if  it is even and we will sum i%2 in case of odd i value.
//odd no. will always contain 1 at the least significant bits(LSB).
//even no. will always contain 0 at its LSB.
            ans[i]=ans[i/2]+i%2;
        }
        return ans;
    }
};