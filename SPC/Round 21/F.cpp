#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string>words(n);
    for(int i = 0; i < n; i++) cin >> words[i];
    int f = 0;
    for(int i = 0; i < n; i++){
        if(words[0][i] != words[i][0]){
            f = 1;
            break;
        }
    }
    f == 1? cout << "NO\n" : cout << "YES\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}