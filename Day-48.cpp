// CPP SOLUTION
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
    void in_order_traversal(TreeNode* node, TreeNode*& prev, int& min_diff) {
        if (node == nullptr) {
            return;
        }
        in_order_traversal(node->left, prev, min_diff);
        if (prev != nullptr) {
            min_diff = std::min(min_diff, abs(node->val - prev->val));
        }
        prev = node;
        in_order_traversal(node->right, prev, min_diff);
    }
    int minDiffInBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        int min_diff = INT_MAX;
        in_order_traversal(root, prev, min_diff);
        return min_diff;
    }
};