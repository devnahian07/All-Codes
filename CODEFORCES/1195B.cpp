#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    // 1 2 3 5 7 9 11 13 15
    // 1 1 1 1 1 1 1
    // int r = ceil((double)n / (double)2);
    // int res = (r*(r+1))/2;
    // cout << (res - k) << "\n";
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++){
        sum+=i;
        if((sum-(n-i)) == k) break;
    }
    cout << (n-i) << "\n";
    return 0;
}