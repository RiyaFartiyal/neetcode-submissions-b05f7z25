class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string rs;
        int n=word1.size(),m=word2.size();
        for(int i=0;i<n||i<m;i++)
        {
            if(i<n)
            {
                rs+=word1[i];
            }
            if(i<m)
            {
                rs+=word2[i];
            }
        }
        return rs;
    }
};