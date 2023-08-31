#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s.size()%2 != 0) cout << "NO\n";
    else{
        if(s[0]==')' || s[s.size()-1]=='(') cout << "NO\n";
        else cout << "YES\n";
    }
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}