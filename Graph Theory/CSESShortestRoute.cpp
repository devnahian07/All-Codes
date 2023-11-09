#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>adj[n+1];
    for(int i = 1; i <= m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>mpq;
    vector<int>dis(n+1, LONG_LONG_MAX);
    mpq.push({0, 1});
    while(!mpq.empty()){
        pair<int, int>tmp = mpq.top();
        mpq.pop();
        if(tmp.first < dis[tmp.second]){
            dis[tmp.second] = tmp.first;
            for(auto x: adj[tmp.second]){
                if((tmp.first+x.second) < dis[x.first]){
                    mpq.push({(tmp.first+x.second), x.first});
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << dis[i] << " ";
    cout << "\n";
    return 0;
}