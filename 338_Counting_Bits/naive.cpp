class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for (int i = 0; i <= num; i++) {
            int count = 0;
            int j = i;
            while(j!=0){
                if (j%2==1) {
                    count ++;
                }
                j = j / 2;
            }
            
            ans.push_back(count);
        }
        return ans;
    }
};
