#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    if((m-1) >= 1) cout << (m-1) << "\n";
    else cout << (m+1) << "\n";
    return 0;
}