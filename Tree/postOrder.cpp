#include<iostream>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int value){
        data= value;
        left = right = NULL;
    }
};

void postorder(treeNode* root){
    //left | root | right
    if(root == NULL)return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    treeNode* root = new treeNode(1);

    root->left = new treeNode(2);
    root->right = new treeNode(3);
    
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    root->right->left = new treeNode(6);
    root->right->right = new treeNode(7);


    postorder(root);
}