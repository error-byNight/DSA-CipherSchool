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

int countnodes(treeNode* root){
    if(root == NULL)return 0;
    return 1 + countnodes(root->left)+countnodes(root->right);
}

int main(){
    treeNode* root = new treeNode(1);

    root->left = new treeNode(2);
    root->right = new treeNode(3);
    
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    root->right->left = new treeNode(6);
    root->right->right = new treeNode(7);


    cout<<countnodes(root);
}