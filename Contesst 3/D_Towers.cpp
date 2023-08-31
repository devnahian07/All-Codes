#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums[x]++;
    }
    int mx = 0;
    for(auto x: nums){
        mx = max(mx, x.second);
    }
    cout << mx << " " << nums.size() << "\n";
    return 0;
}