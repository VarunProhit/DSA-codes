class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
           int low =0, high=nums.size()-1;
      long mid;
      while(low<high)
      {
          mid=(low+high)/2;
          if(mid%2)
          {
              if(nums[mid]!= nums[mid+1])
                  low=mid+1;
              else
                  high=mid;
          }
          else
          {
              if(nums[mid]==nums[mid+1])
                    low=mid+1;
              else
                  high =mid;
          }
      }
        return nums[high]; 
    }
};