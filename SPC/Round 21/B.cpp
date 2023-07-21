#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n>=1000 && n<6000) cout << 1 << "\n";
    else if(n>=6000 && n<26000) cout << 2 << "\n";
    else if(n>=26000 && n<76000) cout << 3 << "\n";
    else if(n>=76000) cout << 4 << "\n";
    else cout << 0 << "\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}