#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    int ar1[n];
    int ar2[n];
    int ttl = 0;
    for(int i = 0; i < n; i++){
        cin >> ar1[i] >> ar2[i];
        ttl+=ar1[i];
    }
    int idx = 0;
    int mn = ar2[0];
    for(int i = 1; i < n; i++){
        if(ar2[i]<mn){
            mn = ar2[i];
            idx = i;
        }
    }
    int cost = 0;
    for(int i = 0; i < idx; i++){
        ttl-=ar1[i];
        cost+=(ar1[i]*ar2[i]);
    }
    cost+=(mn*ttl);
    cout << cost << "\n";
    return 0;
}