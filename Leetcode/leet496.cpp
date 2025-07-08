//https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int> st;

        for(int i = nums2.size() - 1; i >= 0; i--){
            while(st.size() > 0 && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty()){
                m[nums2[i]] = -1;
            }
            else{
                m[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0; i <nums1.size(); i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};



// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int> &arr) {
//         int n = arr.size();
//         vector<int> result(n, -1);
//         stack<int> st;

//         //Traverse from right to left
//         for(int i = n-1; i>= 0;  i-- ){
//             //remove smaller or equal elements
//             while(!st.empty()  && st.top() <= arr[i]){
//                 st.pop();
//             }

//             //if stack is not empty, top is the next greater
//             if(!st.empty()){
//                 result[i] = st.top();
//             }

//             //push the current element
//             st.push(arr[i]);
//         }
//         return result;
//     }
// };



