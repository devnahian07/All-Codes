#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n; cin >> n;
    int msum = ((n)*(n+1))/2;
    int sum = 0;
    for(int i = 0; i < (n-1); i++){
        int x;
        cin >> x;
        sum+=x;
    }
    cout << (msum-sum) << "\n";
    return 0;
}