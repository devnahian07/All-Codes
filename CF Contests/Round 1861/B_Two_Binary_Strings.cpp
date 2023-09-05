#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    string a, b;
    cin >> a;
    cin >> b;
    if(a==b){
        cout << "YES\n";
    }
    else if(a[1]=='1' && b[1]=='1'){
        cout << "YES\n";
    }
    else if(a[a.size()-1]=='0' && b[b.size()-1]=='0') cout << "YES\n";
    else{
        int idx1 = -1;
        for(int i = a.size()-2; i >= 0; i--){
            if(a[i]=='1' && b[i]=='1'){
                idx1 = i;
                break;
            }
        }
        if(idx1!=-1){
            if(a[idx1-1]=='0' && b[idx1-1]=='0') cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}