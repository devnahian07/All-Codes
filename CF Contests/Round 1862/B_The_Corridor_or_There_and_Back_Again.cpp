#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int stp = INT_MAX;
    for(int i = 0; i < n; i++){
        double x, y;
        cin >> x >> y;
        int stp2 = (x+(ceil(y/2)-1));
        stp = min(stp, stp2);
    }
    cout << stp << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}