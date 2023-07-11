#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    map<int, int>nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums[x]++;
    }
    auto it = nums.begin();
    for(auto it2 = nums.begin()++; it2 != nums.end(); it2++){
        if(it2->second > it->second){
            it = it2;
        }
    }
    cout << it->second << "\n";
    return 0;
}