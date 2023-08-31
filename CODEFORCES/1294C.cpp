#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> divs;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            if(i == (n/i)){
                divs.push_back(i);
            }
            else{
                divs.push_back(i), divs.push_back(n/i);
            }
        }
    }
    int f = 0;
    sort(divs.begin(), divs.end());
    int s = divs.size();
    vector<int> fn;
    for(int i = 0; i < (s-1); i++){
        int a = divs[i], b = divs[i+1];
        int m = a*b;
        for(int j = 0; j < s; j++){
            int c = divs[j];
            if((m*c == n) && ((a!=b)&&(b!=c)&&(c!=a))){
                f = 1;
                fn.push_back(a);
                fn.push_back(b);
                fn.push_back(c);
                break;
            }
        }
        if(f) break;
    }
    if(!f) cout << "NO\n";
    else{
        cout << "YES\n";
        for(auto x: fn) cout << x << " ";
        cout << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}