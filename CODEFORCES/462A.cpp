#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    char ar[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++) cin >> ar[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cnt = 0;
            if((j-1)>=0 && ar[i][j-1]=='o') cnt++;
            if((i-1)>=0 && ar[j][i-1]=='o') cnt++;
            if((j+1)<=(n-1) && ar[i][j+1]=='o') cnt++;
            if((i+1)<=(n-1) && ar[i+1][j]=='o') cnt++;
            if(cnt % 2 != 0){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}