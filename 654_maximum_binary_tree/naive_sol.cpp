/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        if (nums.size() == 0) {
            return NULL;
        }

        int max = nums[0];

        int max_index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (max < nums[i]) {
                max = nums[i];
                max_index = i;
            }
        }
        vector<int> left(nums.begin(), nums.begin() + max_index);
        vector<int> right(nums.begin() + max_index + 1, nums.end());
        //TreeNode n = new TreeNode(max,constructMaximumBinaryTree(left), constructMaximumBinaryTree(right));
        TreeNode *n = new TreeNode(max);
        n->left = constructMaximumBinaryTree(left);
        n->right = constructMaximumBinaryTree(right);

        return n;

    }
};