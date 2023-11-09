#include<bits/stdc++.h>

#define int long long

using namespace std;

typedef pair<long long, long long> pll;
// using pll = pair<long long, long long>; --> both(the upper one) will do the same...
// if we use define then the auto-suggestion won't show up
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Djikstra
    int n, m;
    cin >> n >> m;
    vector<pll>adj[n+1];
    vector<int>dis(n+1, LLONG_MAX);
    for(int i = 1; i <= m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(pll{b, c});
    }
    // we need a minimum priority queue
    priority_queue<pll, vector<pll>, greater<pll>>mpq; // we could've used another technique of pushing the values as negative
    // {dis, node}
    mpq.push({0, 1});
    while(!mpq.empty()){
        pll x = mpq.top();
        mpq.pop();
        int d = x.first, cur = x.second;
        if(d < dis[cur]){
            dis[cur] = d;
            for(pll y: adj[cur]){
                int v = y.first, c = y.second;
                if((d+c)<dis[v]){
                    mpq.push({(d+c), v});
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << dis[i] << " ";
    }
    cout << "\n";
    return 0;
}