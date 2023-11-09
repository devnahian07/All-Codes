#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int mn = INT_MAX;
    for(int i = 1; i < n-1; i++){
        int mx = 0;
        for(int j = 0; j < n-1; j++){
            if(j==i) continue;
            if(j+1==i) mx = max(mx, nums[j+2]-nums[j]);
            else mx = max(mx, nums[j+1]-nums[j]);
        }
        mn = min(mn, mx);
    }
    cout << mn << "\n";
    return 0;
}