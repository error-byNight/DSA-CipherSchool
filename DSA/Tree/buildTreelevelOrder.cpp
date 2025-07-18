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

TreeNode* buildTreeLevelOrder(){
    int rootData;
    cout << "Enter root value (-1 for NULL): ";
    cin >> rootData;

    if(rootData == -1) return NULL;

    TreeNode* root = new TreeNode(rootData);
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Enter left and right of " << current->data << " (-1 for NULL): ";
        cin >> leftData >> rightData;

        if(leftData != -1){
            current->left = new TreeNode(leftData);
            q.push(current->left);
        }
        if(rightData != -1){
            current->right = new TreeNode(rightData);
            q.push(current->right);
        }
    }
    return root;
}

// Inorder traversal to verify the tree
void inorder(TreeNode* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = buildTreeLevelOrder();

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
