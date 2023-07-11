#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(int n, int x){
    if(x>n) return ;
    cout << x << "\n";
    solve(n, x+1);
}

signed main(){
    int n;
    cin >> n;
    solve(n, 1);
    return 0;
}