//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  public:
  
    bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& rec){
        visited[node] = true;
        rec[node] = true;
        
        for(int neighbour: adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour, adj, visited, rec)){
                    return true; // cycle is detected in depper path
                }
            }
            else if(rec[neighbour]){
                // if neighbour is in rec vector -> cycle exists
                return true;
            }
        }
        rec[node] = false;
        return false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);   // V stands for vertices
        // initilize visited and rec
        vector<bool> visited(V, false); // we initialise false/0 for every node that this is not visited  currently         
        vector<bool> rec(V,false); // we initialise false for every node
            
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            
            
            adj[u].push_back(v);   // but here we won't going to push back vice versa
        }
        
         // run DFS from all universal nodes
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, rec)) {
                    return true;
                }
            }
        }  
        return false;
            
    }
};