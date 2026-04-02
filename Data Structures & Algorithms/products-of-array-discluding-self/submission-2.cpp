class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {   int f=1;
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i)
                {
                    f=f*nums[j];
                    
                }
            }
            result.push_back(f);
        }
        return result;
    }
};
// 1 2 4 6
