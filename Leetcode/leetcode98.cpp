///https://leetcode.com/problems/validate-binary-search-tree/description/

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
    bool isValid(TreeNode* root, long minVal, long maxVal) {
        if(root==NULL) return true;
        
        if(root-> val <= minVal || root-> val >=maxVal) return false;
        bool leftAns = isValid(root->left, minVal, root->val);
        bool rightAns = isValid(root-> right, root->val, maxVal);
        
        return leftAns && rightAns;
    }
    bool isValidBST(TreeNode* root){
        return isValid(root, LONG_MIN, LONG_MAX);
    }
    
};