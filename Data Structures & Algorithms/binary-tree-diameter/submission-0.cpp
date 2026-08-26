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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;

        function<int(TreeNode*)> dfs = [&](TreeNode* cur) -> int {
            if (cur == nullptr) {
                return 0;
            }

            int left = dfs(cur->left);
            int right = dfs(cur->right);

            res = max(res, left + right);

            return 1 + max(left, right);
        };

        dfs(root);

        return res;
    }
};
