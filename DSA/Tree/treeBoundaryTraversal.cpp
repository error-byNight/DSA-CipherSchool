///https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1


/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
  void traverseLeft(Node* root, vector<int> &ans){
      if(root == NULL || (root-> left == NULL) &&(rooot->right==NULL))return;
      
      ans.push_back(root->data);
      
      if(root->left){
          traverseLeft(root->left, ans);
      }
      else{
          traverseLeft(root->right, ans);
      }
      
  }
  
  void traverseRight(Node* root, vector<int> &ans){
    if(root == NULL || (root-> left == NULL) &&(rooot->right==NULL))return;
    
    if(root->right){
        traverseRight(root->right, ans);
    }
    else{
        traverseRight(root->left, ans);
    }
    //Pushing in ans while returning back
    ans.push_back(root->data)

  }
  
  void traverseLeaf(Node* root, vector<int> &ans){
      if(root==NULL)return;
      
      if(root->left == NULL && root->right- ==NULL){
      ans.push_back(root->data);
      rerurn;
  }
  traverseLeaf(root->left, ans);
  traverseLeaf(root->right, ans);
  }
  
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL)return ans;
        
        ans.push_back(root->data);
        
        //left part
        //traverseLeft();
        //TraverseLeaf();
        //traverseRight();
        
        
    }
};