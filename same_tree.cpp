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
        bool isSameTree(TreeNode* p, TreeNode* q) {
            if ((p == nullptr) && (q == nullptr)) {
                return true;
            }

            if ((p == nullptr) || (q == nullptr)) {
                return false;
            }

            if (p->val != q->val) {
                return false;
            }

            return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
                
            
        }
};

// bool isSameTree(TreeNode* p, TreeNode* q) {
//             is_p = true;
//             Preorder(p);

//             is_p = false;
//             Preorder(q);
            
//             if (p_traverse.size() != q_traverse.size()) {
//                 return false;
//             }

//             for (int i = 0; i < p_traverse.size(); i++) {
//                 if (p_traverse[i] != q_traverse[i]) {
//                     return false;
//                 }
//             }

//             return true;
//         }

//         void Preorder(TreeNode* node) {
//             if (node == nullptr) {
//                 if (is_p) {
//                     p_traverse.push_back(1000000);
//                 } else {
//                     q_traverse.push_back(1000000);
//                 }

//             }
//             if (node != nullptr) {
//                 if (is_p) {
//                     p_traverse.push_back(node->val);
//                 } else {
//                     q_traverse.push_back(node->val);
//                 }
//                 Preorder(node->left);
//                 Preorder(node->right);
//             }
//         }

//     private:
//         vector<int> p_traverse;
//         vector<int> q_traverse;
//         bool is_p;