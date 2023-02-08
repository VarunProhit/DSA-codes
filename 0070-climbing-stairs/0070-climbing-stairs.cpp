class Solution {
public:
    int mult(int p,int q,int n)
    {
         int x = max(p,q);
        int y = min(p,q);
       int i,j;
        int m1=1,m2=1;
         int a[45];
        for(i=1;i<=45;i++)
        {
            if(i<=y)
            a[i-1]= i;
            else
                a[i-1]=1;
        }
        if(x!=n)
        for(i=x+1;i<=n;i++)
        {
             m1*=i;
            for(j=0;j<y;j++)
            { 
                if(m1%a[j] ==0)
                { m1 = m1/a[j];           
                    a[j]=1;
                }
            }         
        }
        return m1;
    }
     int climbStairs(int n) {        
        vector<pair<int,int>> v;
      int i,j;        
        if(n%2==0)
        {
            v.push_back(make_pair(n/2,0));
            j=n/2;
            i=1; 
            while(j--)
            {   v.push_back(make_pair(v[i-1].first-1,v[i-1].second+2));
                i++;     }
        }
        else
        {
            v.push_back(make_pair(n/2,1));
            j = n/2;
            i=1;
            while(j--)
            {  v.push_back(make_pair(v[i-1].first-1,v[i-1].second+2));  i++;
            }
        }
         int sum=0;
        for(i=0;i<v.size();i++)
        {  sum += mult(v[i].first,v[i].second,v[i].first+v[i].second);          }
        return sum;
    }
};