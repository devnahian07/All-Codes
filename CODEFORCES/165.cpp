#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>>ins(n);
    for(int i = 0; i < n; i++) cin >> ins[i].first >> ins[i].second;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int cnt2 = 0;
        int up = 0, down = 0, left = 0, right = 0;
        for(int j = 0; j < n; j++){
            if(ins[i].first == ins[j].first){
                if(ins[j].second < ins[i].second and down == 0) cnt2++, down = 1;
                if(ins[j].second > ins[i].second and up == 0) cnt2++, up = 1;
            }
            else if(ins[i].second == ins[j].second){
                if(ins[j].first < ins[i].first and left == 0) cnt2++, left = 1;
                if(ins[j].first > ins[i].first and right == 0) cnt2++, right = 1;
            }
        }
        if(cnt2==4) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}