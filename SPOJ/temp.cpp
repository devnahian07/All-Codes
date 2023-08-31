#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> divs;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if((n/i)==i) divs.push_back(i);
            else divs.push_back(i), divs.push_back(n/i);
        }
    }
    sort(divs.begin(), divs.end());
    for(auto x: divs) cout << x << " ";
    cout << "\n";
    return 0;
}