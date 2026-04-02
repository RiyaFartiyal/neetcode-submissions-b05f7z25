class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int c=0;
        for(int arr:nums)
        {
            mp[arr]++;
            if(mp[arr]>1)
            {
                c=1;
            }
        }
        return c>0;
    }
};