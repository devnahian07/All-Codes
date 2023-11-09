#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for(int i = 1; i <= n; i++) cin >> nums[i];
    vector<int> prefXor(n+1);
    vector<int> suffXor(n+1);
    prefXor[1] = nums[1];
    for(int i = 2; i <= n; i++) prefXor[i] = prefXor[i-1]^nums[i];
    suffXor[n] = nums[n];
    for(int i = n-1; i >= 1; i--) suffXor[i] = suffXor[i+1]^nums[i];
    for(int i = 1; i <= n; i++) cout << prefXor[i] << " ";
    cout << "\n";
    for(int i = 1; i <= n; i++) cout << suffXor[i] << " ";
    cout << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}