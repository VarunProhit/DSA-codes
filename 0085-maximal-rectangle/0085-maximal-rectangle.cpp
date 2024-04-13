class Solution {
public:
    int check(vector<int>hii)
    {
        int m=hii.size(); int ans=0; stack<int>st;
        vector<int>left(m,0); vector<int>right(m,0);
        for(int i=0;i<m;i++)
        {
            while(st.size()!=0&&hii[i]<=hii[st.top()])st.pop();
            if(st.size()==0)left[i]=0;
            else
            left[i]=st.top()+1;
            st.push(i);
        }
        while(st.size()!=0)st.pop();
        for(int i=m-1;i>=0;i--)
        {
            while(st.size()!=0&&hii[i]<=hii[st.top()])st.pop();
            if(st.size()==0)right[i]=m-1;
            else
            right[i]=st.top()-1;
            st.push(i);
        }
        
        for(int i=0;i<m;i++)
        {  int temp=(right[i]-left[i]+1)*hii[i];
            ans=max(ans,temp);
        }
        return ans;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
    int m=matrix.size(); int n=matrix[0].size();
        vector<int>hii(n,0); int ans=0;
        for(int i=0;i<m;i++)
        {   vector<char>temp=matrix[i];
            for(int j=0;j<n;j++)
            {
               if(temp[j]=='0')
                hii[j]=0;
               else if(temp[j]=='1')
                hii[j]++;
                //cout<<hii[j];
            }
         //cout<<endl;
         ans=max(ans,check(hii));
         //cout<<check(hii)<<endl;
        }
        return ans;
    }
};