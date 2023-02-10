class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int fl=0;
        if(n<0)
            fl=1;
        uint32_t ans=0;
        int i;
        long long a[35],j=1;
        for(i=0;i<32;i++)
        {
            if(j&n)a[i]=1;
            else a[i]=0;
            if(i<31)
             j*=2;
        }
        j=1;
        for(i=31;i>=0;i--)
        {
            if(a[i]==1)
            {  ans+=j;
            }
            j*=2;
        }
        if(fl)ans*=(-1);
        return ans;
    }
};