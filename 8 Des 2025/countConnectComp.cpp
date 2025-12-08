#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int u) {
    visited[u] = true;
    for (int i = 0; i < graph[u].size(); i++) {
        int v = graph[u][i];
        if (!visited[v])
            dfs(v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    graph.assign(N + 1, vector<int>());
    visited.assign(N + 1, false);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int components = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            components++;
            dfs(i);
        }
    }

    cout << components << endl;
}
