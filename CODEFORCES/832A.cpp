#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    if((n/k)%2 == 0) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}