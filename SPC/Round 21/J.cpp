#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int p;
    cin >> p;
    int mn = INT_MAX;
    int x1 = 0;
    int x2 = 0;
    for(int i = 1; i*i <= p; i++){
        if(p % i == 0){
            int c = max(i, (p/i)) - min(i, (p/i));
            if(c<mn && ((max(i, (p/i)))!=min(i, (p/i)))){
                x1 = i;
                x2 = (p/i);
            }
        }
    }
    cout << max(x1, x2) << " " << min(x1, x2) << "\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}