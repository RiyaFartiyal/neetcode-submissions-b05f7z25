class Solution {
public:
    void findcombination(int index,int target,vector<int>&ds,vector<int>nums,vector<vector<int>>&ans){
        if(index==nums.size())
            {
                if(target==0)
                    ans.push_back(ds);
                return;
            }
        if(nums[index]<=target)
        {    
            ds.push_back(nums[index]);
           findcombination(index,target-nums[index],ds,nums,ans);
           ds.pop_back();
        }
        findcombination(index+1,target,ds,nums,ans);
    
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombination(0,target,ds,nums,ans);
        return ans;
    }
};
