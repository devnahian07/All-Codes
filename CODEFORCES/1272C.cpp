#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ar[123] = {0};
    for(int i = 0; i < k; i++){
        char c;
        cin >> c;
        ar[(int)(c)]++;
    }
    int cnt1 = 0, cnt2 = 0;
    for(auto x: s){
        if(ar[(int)(x)] == 0){
            cnt1 += ((cnt2*(cnt2+1))/2);
            cnt2 = 0;
        }
        else{
            cnt2++;
        }
    }
    if(cnt2 > 0) cnt1 += ((cnt2*(cnt2+1))/2);
    cout << cnt1 << "\n";
    return 0;
}