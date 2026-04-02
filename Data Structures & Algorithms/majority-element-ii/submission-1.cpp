class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //55133111222;
        unordered_map<int,int>mp;
        for(int num:nums)
        {
           
            
            
                
                    mp[num]++;
            }
            vector<int>ans;
            for(auto a:mp)
            {
                if(a.second>nums.size()/3)
                    ans.push_back(a.first);
            }
    
        
    
    return ans;
    }
};