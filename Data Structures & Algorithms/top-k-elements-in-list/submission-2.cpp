class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int a:nums)
        {
            mpp[a]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(auto& a:mpp)
        {
            heap.push({a.second,a.first});
            if(heap.size()>k)
                heap.pop();
        }
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
