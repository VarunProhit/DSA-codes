class Solution {
public:
    bool canConstruct(string r, string mag) {     
        int i,j,n,m;
        n = mag.size();
        m=r.size();
        int a[26]={0};
        int b[26]={0};
        for(i=0;i<n;i++)
            a[mag[i]-'a']++;
        for(i=0;i<m;i++)
            b[r[i]-'a']++;
        for(i=0;i<26;i++)
            if(b[i]>a[i]) 
                return false;         
        return true;
    }
};