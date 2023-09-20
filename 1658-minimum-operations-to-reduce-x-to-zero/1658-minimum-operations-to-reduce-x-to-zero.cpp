class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
       int sum = 0;
        for(int i =0;i<nums.size();i++)sum += nums[i];
        sum = sum - x;
        if(sum<0)return -1;
        if(sum == 0)return nums.size();
        int maxi = -1;
        int winSize = 1;
        int tot = nums[0];
        int ei = 1,si = 0;
        
            if(tot == sum){
           maxi = max(winSize,maxi);  
             
         }
        
     while(ei<nums.size() || tot>sum){
       
       
          
         if(tot<=sum && ei<nums.size()){
           tot += nums[ei];
         winSize++;
         ei++;
         }
           
         if(tot>sum && si<nums.size()){
             tot -= nums[si];
             si++;
             winSize--;
         }
        
            if(tot == sum){
           maxi = max(winSize,maxi);  
             
         }
         
     }
        
        
      if(maxi == -1)return -1;
        
        
        return nums.size()-maxi;
    }
};