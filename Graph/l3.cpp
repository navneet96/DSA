//DFS Traversal
#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

// DFS function to visit all nodes in a component
void dfs(int node, unordered_map<int, bool>& visited,
         unordered_map<int, list<int>>& adj, vector<int>& component) {
    component.push_back(node);
    visited[node] = true;

    for (auto neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adj, component);
        }
    }
}

// Function to perform DFS on entire graph
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>>& edges) {
    // Create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);  // Undirected graph
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    // Visit all components
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main() {
    // Hardcoded input as per Sample Input 1
    int V = 5, E = 4;
    vector<vector<int>> edges = {
        {0, 2},
        {0, 1},
        {1, 2},
        {3, 4}
    };

    vector<vector<int>> components = depthFirstSearch(V, E, edges);

    cout << "Connected Components:\n";
    for (int i = 0; i < components.size(); i++) {
        cout << "Component " << i + 1 << ": ";
        for (int node : components[i]) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
