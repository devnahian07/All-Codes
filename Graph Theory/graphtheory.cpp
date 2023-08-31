#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    // Adjacency Matrix:
    // int n;
    // cin >> n;
    // bool mat[n][n];
    // memset(mat, 0, sizeof(mat));
    // int m;
    // cin >> m;
    // for(int i = 0; i < m; i++){
    //     int u, v;
    //     cin >> u >> v;
    //     mat[u][v] = 1;
    //     mat[v][u] = 1;
    // }
    // int q;
    // cin >> q;
    // for(int i = 0; i < q; i++){
    //     int u, v;
    //     cin >> u >> v;
    //     if(mat[u][v]) cout << "YES\n";
    //     else cout << "NO\n";
    // }

    //Adjacency List:
    int n;
    cin >> n;
    vector<int>adjList[n];
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int u, v;
        cin >> u >> v;
        int f = 0;
        for(auto x: adjList[u]){
            if(x==v){
                f = 1;
                break;
            }
        }
        f ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}