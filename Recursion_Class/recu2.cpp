#include<bits/stdc++.h>

// #define int long long

using namespace std;

int rec(int n){
    if(n==1) return 1;
    return n+rec(n-1);
}

int C(int n, int r){
    if(n<r) return 0;
    if(r==0) return 1;
    return C(n-1, r) + C(n-1, r-1);
}

int fac(int n){
    if(n==1) return 1;
    return n*fac(n-1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << rec(5) << "\n";
    // cout << C(0, 0);
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++) v.push_back(i);
    int r = fac(n);
    while(r--){
        next_permutation(v.begin(), v.end());
        for(auto x: v) cout << x << " ";
        cout << "\n";
    }
    // Prefixes of 1, 2, 3 -> 1 ; 1 2; 1 2 3;
    // Map's key/value can also be a map itself
    return 0;
}