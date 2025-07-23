//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
        queue<int> q;
        unordered_map<int, int> parent;

        visited[start] = true;
        q.push(start);
        parent[start] = -1;

        while (!q.empty()) {
            int temp = q.front();
            q.pop();

            for (int neighbour : adj[temp]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                    parent[neighbour] = temp;
                } else if (parent[temp] != neighbour) {
                    // Cycle detected
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1]; 

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(V, false);
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (bfs(i, adj, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};

// class Solution {
//   public:
  
//     bool dfs(int node, vector<vector<int>>& adj, vector<bool> &visited, unordered_map<int, int> &parent){
//         visited[node] = true;
        
//         for(int neighbour : adj[node]){
//             if(!visited[neighbour]){
//                 parent[neighbour] = node;
                
//                 if(dfs(neighbour, adj, visited, parent)){
//                     return true;
//                 }
//             }
//             else if(parent[node] != neighbour){
//             //if already visited and not parent => cycle exit
//             return true;
//         }
//     }
//     return false;
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         vector<vector<int>>adj(V);
//         for(auto edge : edges){
//             int u = edge[0], v = edge[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
        
//         vector<bool> visited(V, false);
        
//         for(int i = 0; i < V; i++){
//             if(!visited[i]){
//                 unordered_map<int, int> parent;
//                 parent[i] = -1;
                
//                 //dfs
//                 if(dfs(i, adj, visited, parent)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
