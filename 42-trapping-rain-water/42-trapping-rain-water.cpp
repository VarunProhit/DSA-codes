class Solution {
public:
    int trap(vector<int>& a) {
          int n=a.size();
        if(n<=2)
        return 0;
        
        int total=0,lmax=a[0],rmax=a[n-1];
        int i=0,j=n-1;
        while(i<j)
        {
            lmax=max(lmax,a[i]);
            rmax=max(rmax,a[j]);
            if(lmax > rmax)
            total += rmax - a[j--];
            else
            total += lmax - a[i++];
            
        }
        return total;
    }
};