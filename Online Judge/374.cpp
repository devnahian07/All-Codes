#include<bits/stdc++.h>

#define int long long

using namespace std;

int POW(int a, int b, int mod){
    if(b==0) return 1;
    int res = POW(a, b/2, mod);
    if(b%2==0) return ((res*res)%mod);
    else return ((((res*res)%mod)*a)%mod);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b, p, m;
    while(cin >> b >> p >> m){
        cout << POW(b, p, m) << "\n";
    }
    return 0;
}