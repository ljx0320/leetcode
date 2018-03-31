class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string str = "";
        
        if (s == "") {
            return str;
        }
        for (int i = s.size()-1; i >= 0;i--) {
            if (i == 0) {
                str += s[i];
                ans.push_back(str);
            }
            
            if (s[i]!=' ') {
                str += s[i];
            }
            else {
                ans.push_back(str);
                str = "";
            }
            

            
        }
        string ret = "";
        for (int j = ans.size()-1; j >= 0; j--) {
            ret = ret + ans[j] + " ";
        }
        string a(ret.begin(),ret.end()-1);
        return a;
        
    }
};
