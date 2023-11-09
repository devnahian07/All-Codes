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
    vector<int>f(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(nums[i]%2 != 0){
            if(nums[i]<0) f[i] = ceil((double)nums[i]/(double)2);
            else f[i] = floor((double)nums[i]/(double)2);
            sum+=f[i];
        }
        else{
            f[i] = (nums[i]/2);
            sum+=f[i];
        }
    }
    if(sum>0){
        for(int i = 0; sum>0 && i < n; i++){
            if(nums[i]%2!=0 and nums[i]<0){
                f[i]--;
                sum--;
            }
        }
    }
    else if(sum<0){
        for(int i = 0; sum<0 && i < n; i++){
            if(nums[i]%2!=0 and nums[i]>0){
                f[i]++;
                sum++;
            }
        }
    }
    for(auto x: f) cout << x << "\n";
    return 0;
}