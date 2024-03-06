class Solution {
public:
    bool isPerfectSquare(int n) {
        int l=1,r=n/2+1;
        while(l<=r)
        {
            long long mid = l + (r-l)/2;
            if(mid*mid == n)return true;
            if(mid*mid>n)r=mid-1;
            else l = mid+1;
        }
        return false;
    }
};