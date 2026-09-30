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
   private:
    bool sameTree(TreeNode* root, TreeNode* subroot) {
        if (root == nullptr && subroot == nullptr) return true;
        if (root == nullptr && subroot != nullptr) return false;
        if (root != nullptr && subroot == nullptr) return false;
        if (root->val != subroot->val) return false;
        return sameTree(root->left, subroot->left) && sameTree(root->right, subroot->right);
    }

   public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) return false;
        if (sameTree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
