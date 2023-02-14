class Solution {
public:
    int firstUniqChar(string s) {
      
        int i,j,n=s.size();
        int a[26]={0};
        for(i=0;i<n;i++)a[s[i]-'a']++;
        for(i=0;i<n;i++)
        {
            if(a[s[i]-'a']==1){ return i;}
        }
        return -1;
    }
};