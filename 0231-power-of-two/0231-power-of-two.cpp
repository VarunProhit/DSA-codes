class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        long long ans=0;
        long long i,j=1;
        for(i=0;i<32;i++)
        {
            if(j&n)ans++;
            j*=2;
            //cout<<j;
        }
        cout<<ans;
        if(ans==1)
            return true;
        return false;
    }
};