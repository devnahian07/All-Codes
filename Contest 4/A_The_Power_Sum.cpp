#include<bits/stdc++.h>

#define int long long

using namespace std;

int ans = 0;

int n;

void rec(int curr, int rem){
    if(rem==0){
        ans++;
        return ;
    }
    if(rem < 0) return ;
    if(pow(curr, n) > rem) return ;
    rec(curr + 1, rem - pow(curr, n));
    rec(curr + 1, rem);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x >> n;
    rec(1, x);
    cout << ans << "\n";
    return 0;
}