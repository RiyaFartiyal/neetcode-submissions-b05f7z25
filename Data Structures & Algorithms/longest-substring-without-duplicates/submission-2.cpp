class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c=0;
        
        for(int i=0;i<s.size();i++)
        {   unordered_set<char>smp;
            for(int j=i;j<s.size();j++)
            {
                if(smp.find(s[j])!=smp.end())
                {
                    break;
                }
                smp.insert(s[j]);
            }
            c=max(c,  (int)smp.size());
        }

        return c;

    }
};
