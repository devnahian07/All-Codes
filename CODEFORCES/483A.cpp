#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        for(int j = i+1; j <= r; j++){
            for(int k = j+1; k <= r; k++){
                if(__gcd(i, j)==1 && __gcd(j, k)==1 && __gcd(i, k)!=1){
                    cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}