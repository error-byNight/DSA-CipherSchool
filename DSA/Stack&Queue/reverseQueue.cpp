//https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1?track=placement

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> st;
        if(q.empty()||k<=0||k>q.size()){
            return q;
        }
        // code here
        //Push first k elements in the stack
        for(int i=0; i<k;i++){
            st.push(q.front());
            q.pop();
        }
        //Enqueue back the elements from stack
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        for(int i =0; i<q.size()-k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};