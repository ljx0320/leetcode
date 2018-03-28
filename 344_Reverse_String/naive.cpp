class Solution {
public:
    string reverseString(string s) {
        string ans = "";
        for (int i = 1; i <= s.size(); i++) {
        ans += s[s.size()-i]; 
        }
        return ans;
    }
};
