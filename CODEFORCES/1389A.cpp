#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int l, r;
        cin >> l >> r;
        if((l*2)<=r) cout << l << " " << l*2 << "\n";
        else cout << -1 << " " << -1 << "\n";
    }
    return 0;
}