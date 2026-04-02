class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
                return "";
        string prefix=strs[0];//"bat","ban","ball"
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            while(j<min(prefix.size(),strs[i].size()))
            {
                if(prefix[j]!=strs[i][j])
                { break;
                }
                j++;
            }
            prefix=prefix.substr(0,j);
        }
        return prefix;  



    }
};