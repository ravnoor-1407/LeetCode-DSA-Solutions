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
    TreeNode* invertTree(TreeNode* root) {
        // Base case: if the current node is empty, stop and return nullptr
        if (root == NULL) {
            return NULL;
        }
        
        // Swap the left and right child pointers using a temp variable
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        // Repeat the exact same process for the left and right subtrees
        invertTree(root->left);
        invertTree(root->right);
        
        // Return the root of the inverted tree
        return root;
    }
};