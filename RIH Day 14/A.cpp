#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    if(n%2!=0){
        for(int i = 0; i <= (n/2); i++){
            if(i==(n/2)) cout << ar[i] << "\n";
            else{
                cout << ar[i] << " " << ar[n-i-1] << " ";
            }
        }
    }
    else{
        for(int i = 0; i < (n/2); i++){
            cout << ar[i] << " " << ar[n-i-1] << " ";
        }
        cout << "\n";
    }
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}