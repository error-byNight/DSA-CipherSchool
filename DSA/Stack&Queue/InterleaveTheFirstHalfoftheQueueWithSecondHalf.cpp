//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        
        //Init an empty Stack
        stack<int> st;
        int halfsize = q.size()/2;
        
        //Push first half of queue in stack
        //q= 16 17 18 19 20. stack 15 14 13 12 11
        for(int i=0; i<halfsize; i++){
            st.push(q.front());
            q.pop();
        }
        //Enqueue back the stack elements
        //q= 16 17 18 19 20 15 14 13 12 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        //Dequeue first half again
        //q=15 14 13 12 11 16 17 18 19 20
        for(int i=0; i<halfsize;i++){
            q.push(q.front());
            q.pop();
        }
        //Again push the front
        //q= 16 17 18 19 20 stack : 11 12 13 14 15 16
        for(int i = 0; i<halfsize; i++){
            st.push(q.front());
            q.pop();        
    }
     // Interleave the elements from stack and queue
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};