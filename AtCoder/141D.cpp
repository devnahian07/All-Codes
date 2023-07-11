#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n, m;
    cin >> n >> m;
    priority_queue<int> prices;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        prices.push(x);
    }
    while(m--){
        int tmp = prices.top();
        prices.pop();
        prices.push(tmp/2);
    }
    int ans = 0;
    while(!(prices.empty())){
        ans+=prices.top();
        prices.pop();
    }
    cout << ans << "\n";
    return 0;
}