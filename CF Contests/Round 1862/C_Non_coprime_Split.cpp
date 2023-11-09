#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= 10; i++){
        if(__gcd(i/2, i-(i/2)) != 1){
            cout << (i/2) << " " << (i-(i/2)) << "\n";
            return ;
        }
    }
    cout << -1 << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}