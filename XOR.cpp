#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    // int n;
    // cin >> n;
    // int ar[n];
    // for(int i = 0; i < n; i++) cin >> ar[i];
    // int x = ar[0];
    // for(int i = 1; i < n; i++){
    //     x^=ar[i];
    // }
    // cout << x << "\n";
    // int x;
    // cin >> x;
    // if((x^(x-1))==((2*x)-1)) cout << "Y" << "\n";
    // else cout << "N" << "\n";
    // int n;
    // cin >> n;
    // int ar[n];
    // for(int i = 0; i < n; i++) cin >> ar[i];
    // int csu[n];
    // csu[0] = ar[0];
    // for(int i = 1; i < n; i++){
    //     csu[i] = csu[i-1]+ar[i];
    // }
    // for(int i = 0; i < n; i++) cout << csu[i] << " ";
    // cout << "\n";
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 1; i <= n; i++){
        cin >> ar[i];
    }
    int x[n+1];
    x[0] = 0;
    for(int i = 1; i <= n; i++) x[i] = x[i-1] ^ ar[i];
    int l, r;
    cin >> l >> r;
    cout << (x[r]^x[l-1]) << "\n";
    return 0;
}