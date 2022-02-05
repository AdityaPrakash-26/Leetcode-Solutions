// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    void dfs(int vertex, vector<int> adj[], vector<int> &vis,vector<int> &traversal){
        vis[vertex] = 1;
        traversal.push_back(vertex);
        for(auto it : adj[vertex]){
            if(!vis[it]){
                vis[it] = 1;
                dfs(it, adj, vis, traversal);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> traversal;
        vector<int> vis(V, 0);
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                dfs(i, adj, vis, traversal);
            }
        }
        return traversal;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends