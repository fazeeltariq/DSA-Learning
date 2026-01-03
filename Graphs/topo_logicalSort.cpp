#include <bits/stdc++.h>
using namespace std;

void dfsTopo(int u, vector<vector<int>> &adj, vector<bool> &vis, stack<int> &st) {
    vis[u] = true;

    for (int v : adj[u]) {
        if (!vis[v])
            dfsTopo(v, adj, vis, st);
    }

    // Push the node to stack after visiting all neighbors
    st.push(u);
}

vector<int> topologicalSort(int V, vector<vector<int>> &adj) {
    vector<bool> vis(V, false);
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!vis[i])
            dfsTopo(i, adj, vis, st);
    }

    // Pop from stack to get the topological order
    vector<int> topo;
    while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);

    adj[5] = {2, 0};
    adj[4] = {0, 1};
    adj[2] = {3};
    adj[3] = {1};

    vector<int> topo = topologicalSort(V, adj);

    for (int x : topo)
        cout << x << " ";
    cout << endl;

    return 0;
}
