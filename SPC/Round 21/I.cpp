#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n, m;
    cin >> n >> m;
    int ar1[n];
    int ar2[100005] = {0};
    int ar3[100005] = {0};
    for(int i = 0; i < n; i++) cin >> ar1[i];
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        if(x>=0) ar2[x]++;
        else{
            int y = abs(x);
            ar3[y]++;
        }
    }
    for(int i = 0; i < n; i++){
        if(ar1[i]>=0){
            if(ar2[ar1[i]]==0) cout << ar1[i] << " ";
        }
        else{
            int f = abs(ar1[i]);
            if(ar3[f]==0) cout << ar1[i] << " ";
        }
    }
    return 0;
}