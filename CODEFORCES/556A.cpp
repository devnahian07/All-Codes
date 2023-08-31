#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int oc = 0, zc = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        c=='0' ? oc++ : zc++;
    }
    cout << (max(oc, zc)-min(oc, zc)) << "\n";
    return 0;
}