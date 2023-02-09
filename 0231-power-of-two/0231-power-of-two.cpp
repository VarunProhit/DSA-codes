class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
       int ans=0;
        int i,j=1;
        for(i=0;i<31;i++)
        {
            if(j&n)ans++;
            j=j<<1;
            //cout<<j;
        }
        cout<<ans;
        if(ans==1)
            return true;
        return false;
    }
};