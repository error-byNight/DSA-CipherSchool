#include<iostream>
#include<queue>

using namespace std;
// VERY IMPORTANT: 

class TreeNode{
  public: 
  int data;
  TreeNode* right;
  TreeNode* left;

  TreeNode(int val){
    data = val;
    right = left = NULL;  

  }
};

void PrintLevelOrder(TreeNode* root){
  if(root== NULL) return;
  queue<TreeNode*> q;
  
  q.push(root);
  q.push(NULL); 

  while(!q.empty()){

    TreeNode* temp = q.front();
    q.pop();

    if(temp!=NULL){
      cout<<temp->data<<" ";
      if(temp->left){           // if temp ka left exist krta hai ya nhi 

        q.push(temp->left);
      }               
    if(temp->right){

      q.push(temp->right);
      }
  }
  else if(!q.empty()){
    q.push(NULL);
  }
  }

}


int main() {

    TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right-> left = new TreeNode(6);
  root->right-> right = new TreeNode(7);
  
  cout<<"Printing Level Order Traversal = ";
  PrintLevelOrder(root);
  
  return 0;
}