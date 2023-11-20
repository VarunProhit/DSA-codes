class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        map<int,int> m;
        for(auto x:nums){
            m[x]++;
        }
        sort(nums.begin(),nums.end());
        int ans=0,temp=0;
        for(int i=nums.size()-1;i>0;i--){
            if(m[nums[i]]>0 && nums[i]!=nums[0]){
                ans+=m[nums[i]] + temp;
               temp +=m[nums[i]];
               m[nums[i]]=0;
                
            }
        }
        return ans;
    }
};