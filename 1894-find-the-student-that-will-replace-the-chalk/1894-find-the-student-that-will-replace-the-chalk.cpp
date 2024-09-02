class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        long long ans=0,sum=0;
        for(auto x: chalk)sum+=x;
        k=k%sum;
        sum=0;
        for(int i=0;i<chalk.size();i++)
        {
            if(k<chalk[i])
                return i;
            k-=chalk[i];
        }
        return 0;
    }
};