#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    vector<int>nums;
    for(int i = 0; i < n; i++){
        int s1 = sqrt(ar[i]), s2 = sqrt(ar[i]);
        if((s1*s2)!=ar[i]) nums.push_back(ar[i]);
    }
    sort(nums.begin(), nums.end());
    cout << nums.back() << "\n";
    return 0;
}