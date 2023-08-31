#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<int> sub1(n), sub2(n);
    for(int i = 0; i < n; i++){
        sub1[i] = a[i] - b[i];
        sub2[i] = b[i] - a[i];
    }
    int ans = 0;
    
    return 0;
}