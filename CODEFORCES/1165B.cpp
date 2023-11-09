#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for(int i = 1; i <= n; i++) cin >> nums[i];
    sort(nums.begin()+1, nums.end());
    // 1 1 3 4
    return 0;
}