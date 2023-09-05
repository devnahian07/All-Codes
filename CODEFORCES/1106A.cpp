#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    char ar[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> ar[i][j];
    }
    int cnt = 0;
    for(int i = 1; i < (n-1); i++){
        for(int j = 1; j < (n-1); j++){
            if(ar[i][j]=='X' && ar[i-1][j-1]=='X' && ar[i+1][j-1]=='X' && ar[i-1][j+1]=='X' && ar[i+1][j+1]=='X') cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}