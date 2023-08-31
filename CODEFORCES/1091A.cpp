#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, b, r;
    cin >> y >> b >> r;
    int i, ans = 0;
    for(i = 1; i <= y; i++){
        if((i+1)>b || (i+2)>r) break;
    }
    i--;
    cout << ((3*i)+3) << "\n";
    return 0;
}