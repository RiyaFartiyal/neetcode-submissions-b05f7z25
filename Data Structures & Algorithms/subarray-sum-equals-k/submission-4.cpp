class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result=0,sum=0;
        unordered_map<int,int>prefixSums;
        prefixSums[0]=1;
        for(int num: nums)
        {
            sum+=num;
            int diff=sum-k;
            result+=prefixSums[diff];
            prefixSums[sum]++;
        }
        return result;

    }
};
//1 1 1 1 1 1 k=3
//4-3=1 diff //4-1=3
//6-3=3
//5-2=3