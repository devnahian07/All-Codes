#include<bits/stdc++.h>

#define int long long

using namespace std;

/*
4 17
4 13
4 9
4 5
4 1
1 3
1 2
1 1
0 1
*/

void solve(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while(a>0 && b>0){
        if(a<b){
            b = max(a, b) - min(a, b);
        }
        else if(a>b){
            a = max(a, b) - min(a, b);
        }
        else{
            a = a-b;
        }
        cnt++;
    }
    cout << cnt << "\n";
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}
