class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())    return "";
        vector<int>sizes;
        string result;
        for(string &s:strs)
        {
            sizes.push_back(s.size());
        }
        for(int sz:sizes)
        {
            result+=to_string(sz)+',';
        }
        result+='#';
        for(string &s: strs)
        {
            result+=s;
        }
        return result;
    }

    vector<string> decode(string s) {
        if(s.empty())   return {};
        vector<int>sizes;
        vector<string>res;
        int i =0;
        while(s[i]!='#')
        {
            string cur="";
            while(s[i]!=',')
            {
                cur+=s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        for(int sz: sizes)
        {
            res.push_back(s.substr(i,sz));
            i+=sz;
        }
        return res;
    }
};
