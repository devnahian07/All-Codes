#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>o;
    vector<int>e;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        x % 2 == 0 ? e.push_back(i) : o.push_back(i);
    }
    if(e.size() >= 1){
        cout << 1 << "\n";
        cout << e[0] << "\n";
    }
    else{
        if(o.size()>=2){
            cout << 2 << "\n";
            cout << *(o.begin()) << " " << *(o.begin()+1) << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}