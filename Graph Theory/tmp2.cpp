#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ar[n][m];
    memset(ar, 1, sizeof(ar));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++) cout << ar[i][j] << " ";
        cout << "\n";
    }
    return 0;
}