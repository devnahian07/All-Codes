#include<bits/stdc++.h>

#define int long long

using namespace std;

vector<int> prefGCD(vector<int> ar){
    int l = ar.size();
    vector<int> prefGCD(l);
    prefGCD[0] = ar[0];
    for(int i = 1; i < l; i++){
        prefGCD[i] = __gcd(prefGCD[i-1], ar[i]);
    }
    return prefGCD;
}

vector<int> suffGCD(vector<int> ar){
    int l = ar.size();
    vector<int> suffGCD(l);
    suffGCD[l-1] = ar[l-1];
    for(int i = l-2; i >= 0; i--){
        suffGCD[i] = __gcd(suffGCD[i+1], ar[i]);
    }
    return suffGCD;
}

int __lcm(int a, int b){
    return ((a*b)/__gcd(a, b));
}

vector<int> prefLCM(vector<int> ar){
    int l = ar.size();
    vector<int> prefLCM(l);
    prefLCM[0] = ar[0];
    for(int i = 1; i < l; i++) prefLCM[i] = __lcm(prefLCM[i-1], ar[i]);
    return prefLCM;
}

vector<int> suffLCM(vector<int> ar){
    int l = ar.size();
    vector<int> suffLCM(l);
    suffLCM[l-1] = ar[l-1];
    for(int i = l-2; i >= 0; i--) suffLCM[i] = __lcm(suffLCM[i+1], ar[i]);
    return suffLCM;
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    vector<int> pref = prefGCD(nums);
    vector<int> suff = suffGCD(nums);
    // for(auto x: prefLCM(nums)) cout << x << " ";
    // cout << "\n";
    // for(auto x: suffLCM(nums)) cout << x << " ";
    // cout << "\n";
    // string s;
    // cout << s.max_size();
    int ans = 0;
    for(int i = 1; i < n; i++){
        ans = max(ans, __gcd(pref[i-1], suff[i+1]));
    }
    cout << ans << "\n";
    return 0;
}