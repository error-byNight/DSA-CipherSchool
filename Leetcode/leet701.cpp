//https://leetcode.com/problems/insert-into-a-binary-search-tree/


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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root== NULL){
            return new TreeNode(val);
        }
        // if value is less than current node -> go left
        else if(val<root->val){
            root-> left = insertIntoBST(root->left, val);
            
        }
        // if value is greater -> go right
        else{
            root-> right = insertIntoBST(root->right, val);

        }
        // return
        return root;
    }
};