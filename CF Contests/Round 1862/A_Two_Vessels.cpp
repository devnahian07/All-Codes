#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    double a, b, c;
    cin >> a >> b >> c;
    int res = ceil((ceil((a+b)/2) - min(a, b))/c);
    cout << res << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}