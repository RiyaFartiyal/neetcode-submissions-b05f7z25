class Solution {
public:
    //majority element 110004={10}
    vector<int> majorityElement(vector<int>& nums) {
    int candidate2=-1;
    int candidate1=-1,count=0,count1=0;
    int n=nums.size();
    for(int i:nums)
    {
        if(i==candidate1)
        {
            count++;
        }
        else if(i==candidate2)
        {
            count1++;
        }
        else if(count==0)
        {   
            candidate1=i;
            count=1;
            
        }
        else if(count1==0)
        {
            candidate2=i;
            count1=1;
        }
        else{
            count--;
            count1--;
        }

    }
    count=count1=0;
    for(int num:nums)
    {
        if(num==candidate1) count++;
        else if (num==candidate2) count1++;
    }
    
    vector<int>res;
    if(count>n/3) res.push_back(candidate1);
    if(count1>n/3) res.push_back(candidate2);
    
    return res;
    }
};