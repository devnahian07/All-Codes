#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    string a, b;
    cin >> a;
    cin >> b;
    int idx = 0;
    int l = a.size() - 1;
    for(int i = l; i >= 0; i--){
        if(a[i]=='1' && b[i]=='1'){
            if(a[i-1]=='0' && b[i-1]=='0'){
                cout << "YES\n";
                return ;
            }
        }
    }
    cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}