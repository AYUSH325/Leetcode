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
using namespace std;
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        // iterative
        // queue<TreeNode*> q1;
        // queue<TreeNode*> q2;
        // q1.push(root->left);
        // q2.push(root->right);
        // TreeNode* left;
        // TreeNode* right;
        // while (!q1.empty() && !q2.empty()) {
        //     left = q1.front();
        //     q1.pop();
        //     right = q2.front();
        //     q2.pop();

        //     if ((left == nullptr) && (right == nullptr)) {
        //         continue;
        //     }
        //     if ((left == nullptr) || (right == nullptr)) {
        //         return false;
        //     } 
        //     if (left->val != right->val) {
        //         return false;
        //     }

        //     q1.push(left->left);
        //     q1.push(left->right);
        //     q2.push(right->right);
        //     q2.push(right->left);
        // }
        // return true;

        // recursive
        if (root == nullptr) {
            return true;
        }

        return findSymmetry(root->left, root->right);
    }

    bool findSymmetry(TreeNode* left, TreeNode* right){
        if ((left == nullptr) && (right == nullptr)) {
            return true;
        }
        if ((left == nullptr) || (right == nullptr)) {
            return false;
        }
        if (left->val != right->val) {
            return false;
        }
        return (findSymmetry(left->left, right->right) && findSymmetry(left->right, right->left));
    }
};