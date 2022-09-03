class Solution {
public:
    void ck(string a,int i,int n,int k, set<string> &ans)
    {
        if(i<0)
            return;
        if(i>9)
            return;
        a+=i+'0';
         if(a.size()==n)
        {
            ans.insert(a);
            return;
        }
        ck(a,i+k,n,k,ans);
        ck(a,i-k,n,k,ans);
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        string a;
       set<string> ans;
        vector<int> an;
        for(int i=1;i<=9;i++)
        {
            a.clear();
            //a+=i+'0';
            ck(a,i,n,k,ans);
            for(auto x:ans)
            {
                an.push_back(stoi(x));
            }
            ans.clear();
        }
        return an;
    }
};