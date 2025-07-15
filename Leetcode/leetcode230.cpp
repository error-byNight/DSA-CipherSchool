//https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int ans = -1;
    void inorder(TreeNode* root, int k) {
        if (root == NULL)
            return;
        // left
        inorder(root->left, k);
        // root
        count++;
        if(count == k){
            ans = root->val;
            return;
        }
        //right
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k){
        inorder(root,k);
        return ans;
    }
};