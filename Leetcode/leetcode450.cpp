//https://leetcode.com/problems/delete-node-in-a-bst/

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
    TreeNode* minValue(TreeNode* root){
        TreeNode* temp = root;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==NULL) return root;

        // if key is less -> go left
        if(key<root->val){
            root-> left = deleteNode(root->left, key);
            return root;
        }
        else if(key>root->val){
            root->right = deleteNode(root->right, key);
            return root;
        }

        // Node to be deleted is found 
        else{
            // CASE1: -> having 0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            // case 2 -> 1 child(left only)
            if(root->left !=NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // case 2 -> 1 child(right only)
            if(root->left ==NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // case 3 -> 2 child
            
            // find inorder successor(min in right subtree)
            TreeNode* successor = minValue(root->right);

            // replace current node's value with successor
            root->val = successor->val;
            
            // delete successor node from right sub tree
            // we apply this recursive call cuz we don't know how many subtrees are there furter
            root-> right = deleteNode(root->right, successor->val);
        }

        return root;

        
    }
};