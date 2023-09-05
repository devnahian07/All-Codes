#include<bits/stdc++.h>

#define int long long

using namespace std;

vector<int> status(1000001, 0);

void sieve(){
    int n = 1000001;
    status[1] = 1;
    for(int i = 2; i < n; i++){
        if(!status[i]){
            for(int j = i*i; j < n; j+=i) status[j] = 1;
        }
    }
}

void solve(){
    string a;
    cin >> a;
    int f = 0;
    int res = -1;
    for(int i = 0; i < a.size(); i++){
        int tmp = ((a[i]-'0')*10);
        for(int j = i+1; j < a.size(); j++){
            tmp+=((a[j]-'0'));
            if(status[tmp]==0){
                f = 1;
                res = tmp;
                break;
            }
            else{
                tmp-=(a[j]-'0');
            }
        }
        if(f) break;
    }
    cout << res << "\n";
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}