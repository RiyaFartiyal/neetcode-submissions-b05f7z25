class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int j=0;
     for(int i=1;i<=nums.size();i++)
     {
        if(nums[i]!=nums[j])
        {
            j++;
            //nums[fast]=nums[slow];
            nums[j]=nums[i];
        }
     }
     return j;
    }
};//112222344//112
//1234
// 1  1 