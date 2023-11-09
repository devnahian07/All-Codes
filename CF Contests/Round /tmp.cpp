#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    int ans = ar[0];
    for(int i = 1; i < n; i++) ans = (ans^ar[i]);
    cout << ans << "\n";
    return 0;
}