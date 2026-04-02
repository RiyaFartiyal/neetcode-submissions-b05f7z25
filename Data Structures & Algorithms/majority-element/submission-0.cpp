class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int ,int>mp;
     int no=nums.size();
    
     for(int n:nums)
     {
        mp[n]++;
        if(mp[n]>no/2)
        {
          return n;
        }
     }
    return -1;
    }
};