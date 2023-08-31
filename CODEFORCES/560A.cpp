#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if((n-i)%i == 0) ans++;
    }
    cout << (ans-1) << "\n";
    return 0;
}