#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    if(n==3){
        cout << -1 << "\n";
        return ;
    }
    else if(n%2==0){
        for(int i = 0, j = n; j > 0; i++, j--) nums[i] = j;
    }
    else{
        nums[0] = n-1;
        nums[1] = n;
        for(int i = 2, j = 1; j < (n-1); i++, j++) nums[i] = j;
    }
    for(auto x: nums) cout << x << " ";
    cout << "\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}