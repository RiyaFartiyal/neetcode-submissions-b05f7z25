class Solution {
public:
    bool isPalindrome(string s) {
      string str;
      for(int i=0;i<s.length();i++)
      {
        if(isalnum(s[i]))
        {
            str+=tolower(s[i]);
        }
      }
      string rev=str;
      reverse(rev.begin(),rev.end());
      return rev==str;  
    }
};
//isalnum(s[i]) tolower(s[i])