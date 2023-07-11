#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    set<int>nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.insert(x);
    }
    nums.size() == x ? cout << "yes\n" : cout << "no\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}