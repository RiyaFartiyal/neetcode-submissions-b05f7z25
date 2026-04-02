class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      //vertical scanning 
      //{"boy","boll","bonn"}
      for(int ch=0;ch<strs[0].length();ch++)
      {
            for( string j:strs)
            {
                if(ch==j.length() || j[ch]!=strs[0][ch] )//0word ch character 
                {
                    return j.substr(0,ch);
                }
            }
            
      }  
      return strs[0];
    }
};