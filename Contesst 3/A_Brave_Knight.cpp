#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    string a;
    cin >> a;
    int r = 0, g = 0, b = 0;
    int f = 1;
    for(auto c: a){
        if(c=='r') r = 1;
        else if(c=='g') g = 1;
        else if(c=='b') b = 1;
        else if(c=='R' && r!=1){
            f = 0;
            break;
        }
        else if(c=='G' && g!=1){
            f = 0;
            break;
        }
        else if(c=='B' && b!=1){
            f = 0;
            break;
        }
    }
    f ? cout << "YES\n" : cout << "NO\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}