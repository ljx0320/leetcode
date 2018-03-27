class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        while (left <= right) {
        string num = to_string(left);
        bool is_self_dividing = true;
        for (int i =0;i<num.size();i++) {
            if (num[i] == '0'){
                is_self_dividing = false;
                break;
            }
            else {
                if (left % (num[i]-'0') != 0) {
                    is_self_dividing = false;
                    break;
                }
            }
        }
        if (is_self_dividing) {
            ans.push_back(left);    
        }
            
        left++;
    }
        return ans;
        
    }
};
