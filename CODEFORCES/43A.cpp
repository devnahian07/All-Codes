#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> goals(n);
    for(int i = 0; i < n; i++) cin >> goals[i];
    sort(goals.begin(), goals.end());
    int mxc = 0;
    string w = goals[0];
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i; j < n; j++){
            if(goals[i]==goals[j]) cnt++;
        }
        if(cnt > mxc){
            mxc = cnt;
            w = goals[i];
        }
    }
    cout << w << "\n";
    return 0;
}