class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())
            return "";
        string s;
        for(string i:strs)
        {
           
            s+=to_string(i.size())+'#'+i;
        }
        return s;    
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i < (int)s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;

            res.push_back(s.substr(i,len));
            i=i+len;
        }
        return res;
    }
};
