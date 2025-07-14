///https://www.geeksforgeeks.org/problems/k-sum-paths/1


/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
  // creating a new method called void to using the VECTOR as it will store the value 
  void solve(Node* root, int k, int &count, vector<int> &path){
      if(root == NULL) return;
      
      // we'll push the data of the root
      path.push_back(root->data);
      
      solve(root->left, k, count, path);
      solve(root->right, k, count, path);
      
      // check all sub-paths ending at this node for sum == k
      int sum = 0;
      for(int i = path.size() - 1; i>=0; i--){
          sum+= path[i];
          if(sum == k ) count++;
      }
      
      path.pop_back();
  }
  
    int sumK(Node *root, int k) {
        // code here
        vector<int> path;
        int count = 0;
        solve(root,k, count, path);
        return count;
        

    }
};