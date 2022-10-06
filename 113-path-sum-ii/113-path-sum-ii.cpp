/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    int target(TreeNode *root, int sum, int targetSum, vector<int> temp)
{
    if (root == NULL)
        return 0;
    sum += root->val;
    temp.push_back(root->val);
    if (sum == targetSum and root->left == NULL and root->right == NULL)
        ans.push_back(temp);

    target(root->left, sum, targetSum, temp);
    target(root->right, sum, targetSum, temp);
        return 0;
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         int sum = 0;
    vector<int> vec;
    target(root, sum, targetSum, vec);
    return ans;
    }
};