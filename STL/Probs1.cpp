#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    // Vanya and Fences
    // int n, h;
    // cin >> n >> h;
    // int sum = 0;
    // for(int i = 0; i < n; i++){
    //     int x; cin >> x;
    //     if(x>h) sum+=2;
    //     else sum++;
    // }
    // cout << sum << "\n";

    // Array with odd sum

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int j = 0; j < n; j++) cin >> ar[j];
        int sum = 0, oc = 0, ec = 0;
        for(int j = 0; j < n; j++){
            sum+=ar[j];
            ar[j]%2 ? oc++ : ec++;
        }
        if(sum%2!=0){
            cout << "YES" << "\n";
        }
        else{
            if(oc==0 || ec==0) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        }
    }
    return 0;
}