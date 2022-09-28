#include <bits/stdc++.h>

using namespace std;

class neighbour
{
    int V;
    list<int> *adj;

public:
    neighbour(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);

        // adj[v].push_back(u);
    }

    void BFS(int source)
    {
        int count = 0;
        vector<bool> visited(V, false);
        queue<int> q;
        visited[source] = true;
        q.push(source);
        while (!q.empty())
        {
            int U = q.front();
            // cout << U << " ";
            q.pop();
            for (auto element : adj[U])
            {
                int x = element;

                if (visited[x] != true)
                {
                    visited[x] = true;
                    q.push(x);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
};

int main()
{
    int N, E;

    cin >> N >> E;
    neighbour g(N);
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        g.addEdge(a, b);
    }
    int k;
    cin >> k;
    g.BFS(k);

    return 0;
}
