#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    map<string, int>inp;
    vector<pair<int, int>>adj[n+1];
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        inp[s] = i;
        int p;
        cin >> p;
        for(int j = 1; j <= p; j++){
            int idx, cst;
            cin >> idx >> cst;
            adj[i].push_back({idx, cst});
        }
    }
    int r;
    cin >> r;
    for(int i = 1; i <= r; i++){
        string a, b;
        cin >> a >> b;
        vector<int>dis(n+1, LONG_LONG_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>mpq;
        mpq.push({0, inp[a]});
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
        cout << dis[inp[b]] << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}