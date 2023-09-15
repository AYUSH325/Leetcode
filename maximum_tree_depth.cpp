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
    int maxDepth(TreeNode* root) {
        if (root == nullptr ) {
            return 0;
        }
        int maxDepth = 0;
        // tree level
        queue <TreeNode*> level;
        level.push(root);

        while (!level.empty()) {
            int level_size = level.size();
            for (int i = 0; i < level_size; i++) {
                TreeNode* front = level.front();
                level.pop();
                if (front->right != nullptr) {
                    level.push(front->right);
                }
                if (front->left != nullptr) {
                    level.push(front->left);
                }
            }
            maxDepth++;
        }

        return maxDepth;
    }
};