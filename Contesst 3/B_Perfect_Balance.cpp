#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        int ac = 0, bc = 0;
        for(int j = i; j < n; j++){
            if(s[j]=='a') ac++;
            else if(s[j]=='b') bc++;
            if((ac==bc) && (ac!=0 && bc!=0)){
                cout << (i+1) << " " << (j+1) << "\n";
                return ;
            }
        }
    }
    cout << -1 << " " << -1 << "\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}