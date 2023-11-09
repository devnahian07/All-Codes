#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
vector<int> vis;

int main() {
    int n; cin >> n;
    vis.assign(n + 1, 0);
    int m; cin >> m;
    for(int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    vector<int> parent(n + 1, -1);
    while(!q.empty()) {
        auto temp = q.front();
        q.pop();
        for(auto x: adj[temp]) {
            if(vis[x] == 1 and x != parent[temp]) {
                cout << "YES\n";
                return 0;
            }
            vis[x] = 1;
            parent[x] = temp;
            q.push(x);
        }
    }

}