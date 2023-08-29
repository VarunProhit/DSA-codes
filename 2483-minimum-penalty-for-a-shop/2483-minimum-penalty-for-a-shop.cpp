class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int i;
        vector <int> v(n+1,0), u(n+1,0);
        for(i=1;i<=n;i++)
        {
            if(customers[i-1]=='N')v[i]=v[i-1]+1;
            else v[i]=v[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            if(customers[i]=='Y')u[i]=u[i+1]+1;
            else u[i]=u[i+1];
        }
        int mi=INT_MAX, in=0;
        for(i=0;i<=n;i++){
            cout<<v[i]<<" "; 
        }cout<<endl;
        for(i=0;i<=n;i++){
            cout<<u[i]<<" "; 
        }
        cout<<endl;
        for(i=0;i<=n;i++)
        {
            if(mi>(v[i]+u[i])){
                
                mi = v[i]+u[i];
                in=i;
                cout<<mi<<" ";
            }
        }
        return in;
    }
};