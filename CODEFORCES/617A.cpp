#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int x; cin >> x;
    // 999999
    int sum = 0;
    for(int i = 5; i >= 1; i--){
        sum+=(x/i);
        x%=i;
    }
    cout << sum << "\n";
    return 0;
}