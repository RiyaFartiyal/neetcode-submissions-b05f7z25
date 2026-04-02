class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //nums-array int k
        //total no of subarrays -k
        //subarray - contiguous non-empty sequence of elements
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {   int sum=0;
           // if(k==nums[i])
                // count++;
            for(int j=i;j<nums.size();j++)
            {
                
                sum+=nums[j];
                if(sum==k)
                    count++;
                    
                
            }
        }
        return count;
    }
};
// 2 -1 1 2 k=2 
 //o/p -4 i=0 2  j=1 2-1 =1,1+1=2