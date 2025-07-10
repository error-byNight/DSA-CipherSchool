#include<iostream>
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

int height(treeNode* root){
    if(root == NULL)return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight)+ 1;
}


int main(){
    treeNode* root = new treeNode(1);

    root->left = new treeNode(2);
    root->right = new treeNode(3);
    
    root->left->left = new treeNode(4);
    root->left->right = new treeNode(5);

    root->right->left = new treeNode(6);
    root->right->right = new treeNode(7);


    cout<<height(root)<<endl;
}