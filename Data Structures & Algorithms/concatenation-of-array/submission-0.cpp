class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>con;
        for(int i=0;i<nums.size();i++)
        {
            con.push_back(nums[i]);
            
        }for(int i=0;i<nums.size();i++)
        {
            con.push_back(nums[i]);
            
        }
        return con;
    }
};