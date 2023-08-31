#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    sort(ar, ar+n);
    if(k==0){
        if(ar[0]==1) cout << -1 << "\n";
        else cout << 1 << "\n";
    }
    else if((k > 0 && k < n) && (ar[k-1]==ar[k])){
        cout << -1 << "\n";
    }
    else{
        cout << ar[k-1] << "\n";
    }
    return 0;
}