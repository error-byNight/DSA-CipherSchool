#include <iostream>
using namespace std;

class treeNode{
public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val){
        data = val;
        left = right = NULL;
    }
};

// Inorder traversal (Left, Root, Right)
void inorder(treeNode* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    treeNode* root = new treeNode(1);

    root->left = new treeNode(2);
    root->right = new treeNode(3);
    
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
