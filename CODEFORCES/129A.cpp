#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ar[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> ar[i];
        sum+=ar[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if((sum-ar[i])%2==0) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}