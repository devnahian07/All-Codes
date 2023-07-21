#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(nums[j]>nums[i]) cnt++;
        }
        cout << (cnt+1) << " ";
    }
    cout << "\n";
    return 0;
}