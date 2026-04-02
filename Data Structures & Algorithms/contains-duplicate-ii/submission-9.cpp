class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int>mpp;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {   int current_ele=nums[i];
       // mpp[current_ele]=i;
        if(mpp.find(current_ele)!=mpp.end())
        {
            int old_ele=mpp[current_ele];
            int dis=i-old_ele;
            if(dis<=k)
            {
                return true;
            }
            
        }
        mpp[current_ele]=i;
    } 
    return false;
}};