#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n);
    map<int, int> occ;
    for(int i = 0; i < n; i++) cin >> nums[i], occ[nums[i]]++;
    if(occ.begin()->second > 1){
        cout << "Still Rozdil\n";
    }
    else{
        int i;
        for(i = 0; i < n; i++){
            if(nums[i] == occ.begin()->first){
                break;
            }
        }
        cout << (i+1) << "\n";
    }
    return 0;
}