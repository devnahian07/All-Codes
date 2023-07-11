#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t; cin >> t;
    for(int k = 0; k < t; k++){
        int ar[4];
        cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
        int cnt = 0;
        for(int i = 1; i < 4; i++){
            if(ar[i]>ar[0]) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}