class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        vector<int> ans;
        for (int i = 0; i < nums.size();i++) {
            if (i < nums.size() - 1 && nums[i] == nums[i+1]) {
                ans.push_back(nums[i]);
                i=i+1;
            }
            
        }
        return ans;
    }
};
