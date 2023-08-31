#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    if(a[0]!=n){
        cout << "NO\n";
    } else{
        int f = 0;
        for(int i = 0; i < a[0]; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(b[j]>0) cnt++, b[j]--;
            }
            if(cnt!=a[i]){
                f = 1;
                break;
            }
        }
        f ? cout << "NO\n" : cout << "YES\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}