#include<bits/stdc++.h>

#define int long long

using namespace std;

int fac(int n){
    int res = 1;
    while(n>=1){
        res = ((res*n)%107);
        n--;
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += fac(x);
    }
    cout << (sum%107) << "\n";
    return 0;
}