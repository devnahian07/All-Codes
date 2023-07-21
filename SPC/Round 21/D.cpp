#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n, k;
    cin >> n >> k;
    vector<string>names(n);
    for(int i = 0; i < n; i++) cin >> names[i];
    vector<string>f(k);
    for(int i = 0; i < k; i++) f[i] = names[i];
    sort(f.begin(), f.end());
    for(auto x: f) cout << x << "\n";
    return 0;
}