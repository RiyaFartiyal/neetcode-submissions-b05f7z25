class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>result;
    int n=nums.size();
    
    for(int i=0;i<n;i++)
    {   int f=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                f=f*nums[j];

            }
           
        }
         result.push_back(f);
    }
    return result;
    }
};
