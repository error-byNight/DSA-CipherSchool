#include <iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

int FindingSum(TreeNode* root){
  if(root==NULL) return 0;

  int LS = FindingSum(root->left);
  int RS = FindingSum(root->right);

  return LS + RS + root->data;
  
  
  
}

int main() {

    TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);
  
  cout<<"Sum of the tree = "<<FindingSum(root);
  
  return 0;
}

