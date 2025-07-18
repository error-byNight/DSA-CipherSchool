#include <iostream>
#include <queue>

using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *right;
    TreeNode *left;

    TreeNode(int val)
    {
        data = val;
        right = left = NULL;
    }
};

vector<int> zigZagLevelOrder(TreeNode *root)
{
    vector<int> result;

    if (root == NULL)
        return result;

    queue<TreeNode *> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty())
    {
        int levelSize = q.size();
        vector<int> level(levelSize);

        for (int i = 0; i < levelSize; i++)
        {
            TreeNode *node = q.front();
            q.pop();

            int index = leftToRight ? i : (levelSize - 1 -i);
            level[index] = node->data;

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        for (int i : level)
        {
            result.push_back(i);
        }
        leftToRight = !leftToRight;
    }
    return result;
}

int main()
{

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> res = zigZagLevelOrder(root);
    for (int x : res)
        cout << x << " ";
    cout << endl;
}