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
        
        if (root == NULL){
            return 0;
        }
        // Calculate the depths of the left and right subtrees. and Let's add +1 to exclude the root node.
        int _left = maxDepth(root->left) + 1;
        int _right = maxDepth(root->right) + 1;
        
        return max(_left, _right);
    }
};