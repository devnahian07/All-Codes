#include<bits/stdc++.h>

using namespace std;

#define int long long

vector<int>adj[1001];
vector<int>vis;
vector<int>parent;

void dfs(int root){
    vis[root] = 1;
    for(auto x: adj[root]){
        if(vis[x]==0){
            vis[x] = 1;
            dfs(x);
        }
        else if(vis[x]==1){
            cout << "Yes\n";
            exit(0);
        }
    }
    vis[root] = 2;
    return ;
}
void cycleWDfs(int root){
    for(auto x: adj[root]){
        if(vis[x]==1 && x!=parent[root]){
            cout << "Yes\n";
            exit(0);
        }
        else if(vis[x]==0){
            parent[x] = root;
            vis[x] = 1;
            cycleWDfs(x);
        }
    }
}

signed main(){
    // Adjacency Matrix
    // int n;
    // cin >> n;
    // bool ar[n+1][n+1];
    // memset(ar, 0, sizeof(ar));
    // int m;
    // cin >> m;
    // for(int i = 0; i < m; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     ar[a][b] = ar[b][a] = 1;
    // }
    // int q;
    // cin >> q;
    // for(int i = 0; i < q; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     if(ar[a][b]) cout << "Yes\n";
    //     else cout << "No\n";
    // }
    
    // Adjacency List
    int n;
    cin >> n;
    // vector<int>adj[n+1];
    // vector<int>vis(n+1, 0);
    // vector<int>parent(n+1, 0);
    vis.assign(n+1, 0);
    vis[1] = 1;
    parent.assign(n+1, -1);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);// comment this out to take input for directed graph
    }
    // int q;
    // cin >> q;
    // for(int i = 0; i < q; i++){
    //     int a, b;
    //     cin >> a >> b;
    //     int f = 0;
    //     for(auto x: chk[a]){
    //         if(x==b){
    //             f = 1;
    //         }
    //     }
    //     if(f==0) cout << "No\n";
    // }
    
    // BFS -> to determine parent and also distance from root
    // queue<int> q;
    // vector<int> vis(n+1, 0);
    // vector<int> parent(n+1, 0);
    // int root = 1;
    // q.push(1);
    // vis[root] = 1;
    // parent[root] = -1;
    // while(!q.empty()){
    //     int tmp = q.front();
    //     q.pop();
    //     for(auto x: chk[tmp]){
    //         if(!vis[x]) vis[x] = vis[tmp] + 1, parent[x] = tmp, q.push(x);
    //     }
    // }
    // for(int i = 1; i <= n; i++) cout << parent[i] << " ";
    // cout << "\n";
    // for(int i = 1; i <= n; i++) cout << vis[i]-1 << " ";
    // cout << "\n";
    // vis[1] = 1;
    // dfs(1);

    // Cycle check with BFS-DFS on undirected graph
    // int root = 1;
    // queue<int>q;
    // q.push(root);
    // vis[root] = 1;
    // while(!q.empty()){
    //     int tmp = q.front();
    //     q.pop();
    //     for(auto x: adj[tmp]){
    //         if(vis[x]==1 && x!=parent[tmp]){
    //             cout << "Yes\n";
    //             return 0;
    //         }
    //         vis[x] = 1;
    //         parent[x] = tmp;
    //         q.push(x);
    //     }
    // }
    cycleWDfs(1);
    cout << "No\n";
    return 0;
}
