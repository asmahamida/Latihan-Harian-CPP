#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(make_pair(v, w));
    }

    const long long INF = numeric_limits<long long>::max();
    vector<long long> dist(N + 1, INF);
    dist[1] = 0;

    priority_queue<pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>> pq;
    pq.push(make_pair(0, 1));

    while (!pq.empty()) {
        long long cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (cost > dist[u]) continue;

        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].first;
            int w = graph[u][i].second;
            if (dist[v] > cost + w) {
                dist[v] = cost + w;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << dist[N] << endl;
}
