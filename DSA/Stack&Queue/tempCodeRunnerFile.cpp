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

int sumAtK(TreeNode* root, int k){
    if(root==NULL) return -1;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        if(temp!=NULL){
            if(level == k){
                sum += temp -> data;
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
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



  int k = 2; // for example, sum at level 2
int result = sumAtK(root, k);
cout << "Sum at level " << k << " is: " << result << endl;
return 0;
  
  
}