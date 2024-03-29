class Solution {
public:
  vector<vector<int>> ans;
    void permutations(vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int index = i;index < nums.size(); index++){
            swap(nums[i],nums[index]);
            permutations(nums,i+1);
            swap(nums[i],nums[index]);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums,0);
        return ans;
    }
};