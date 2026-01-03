#include<bits/stdc++.h>
using namespace std;

class Graph {
public:
    int V;
    list<int> *l;

    Graph (int v) {
        V = v;
        l = new list<int> [V];
    }

    void addEdge (int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printGraph () {
        for (int i = 0; i < V; i++)
        {
            cout << i << ": ";
            for(int neighbour: l[i]) {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }

    void BFS () {
        queue<int> q;
        vector<bool> visited (V,false);

        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            cout << u << " ";
            for (int v: l[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push (v);
                }
            }
        }
        cout << endl;
    }

    void DFS_helper (int u , vector<bool> &visited) {
        cout << u << " ";
        visited[u] = true;

        for (int v: l[u]) {
            if (!visited [v]) {
                DFS_helper (v, visited);
            }
        }
    }


    void DFS () {
        int u = 0;
        vector<bool> visited (V,false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
                DFS_helper (i,visited);
        }
        cout << endl;
    }

    bool isCycleHelper (int u, vector<bool> &visited, int parent) {
        visited[u] = true;
        for (int v: l[u]) {
            if (!visited[v]) {
                if (isCycleHelper (v,visited, u)) {
                    return true;
                }
            }
            else if (v != parent) {
                return true;
            }
        }
        return false;
    }

   bool isCycle() {
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {  
            if (isCycleHelper(i, visited, -1)) {
                return true;
            }
        }
    }
    return false;
}

};

int main()
{
    Graph g (5);
    g.addEdge (0,1);
    g.addEdge (1,2);
    g.addEdge (1,3);
    g.addEdge (2,4);
    

    g.printGraph();
    cout  <<"\nBFS traversal: "<< endl;
    g.BFS();
    cout  <<"\nDFS traversal: "<< endl;
    g.DFS();
   return 0;
}