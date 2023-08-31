#include<bits/stdc++.h>

#define int long long

using namespace std;

double ar[1000001];

void memo(){
    ar[0] = 0;
    for(int i = 1; i <= 1000000; i++){
        ar[i] = ar[i-1]+log10(i);
    }
}

void solve(int i){
    int n, b;
    cin >> n >> b;
    int res = (ar[n] / log10(b)) + 1;
    cout << "Case " << i << ": " << res << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memo();
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve(i+1);
    return 0;
}