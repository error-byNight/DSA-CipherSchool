#include<iostream>
#include<queue>

using namespace std; 

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

void  leftView(TreeNode* root){
    if(root==NULL)return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()){
        int levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            TreeNode* curr = q.front();
            q.pop();

            if(i == 0) cout <<curr->data<< " ";
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
    
    cout<<endl;
}

int main() {

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    leftView(root);
    return 0;
}