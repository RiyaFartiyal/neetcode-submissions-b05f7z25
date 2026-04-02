class Solution {
public:
    bool ispalindrome(string s)
    {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        for(int i=0;i<=s.length()-1;i++)
        {   string temp;
            for(int j=0;j<=s.length()-1;j++)
            {
                if(j!=i)
                {
                    temp+=s[j];
                }
                
            }if(ispalindrome(temp))
                    return true;
        }
        return false;
    }
};