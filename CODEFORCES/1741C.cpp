#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 1; i <= n; i++) cin >> ar[i];
    int prefs[n+1];
    prefs[1] = ar[1];
    for(int i = 2; i <= n; i++) prefs[i] = prefs[i-1] + ar[i];
    
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}