#include<bits/stdc++.h>

#define int long long

using namespace std;

int status[1000001];

void sieve(){
    status[1] = 1;
    for(int i = 2; i < 1000001; i++){
        if(!status[i]){
            status[i] = i;
            for(int j = i*i; j < 1000001; j+=i){
                if(!status[j]) status[j] = i;
            }
        }
    }
}

void solve(){
    int n;
    cin >> n;
    int mx = 0;
    while(n>1){
        int tmp = status[n];
        int cnt = 0;
        while(tmp == status[n]){
            cnt++;
            n/=tmp;
        }
        mx = max(mx, cnt);
    }
    cout << mx << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}