#include<bits/stdc++.h>

#define int long long

using namespace std;

int solve(int n, int m, int cnt){
    if(n==m) return cnt;
    if(n>m) return -1;
    if((min((m/(n*2)), (m/(n*3))))%2 == 0) solve(n*2, m, cnt+1);
    else if((min((m/(n*2)), (m/(n*3))))%3 == 0) solve(n*3, m, cnt+1);
}

signed main(){
    int n, m;
    cin >> n >> m;
    cout << solve(n, m, 0) << "\n";
    return 0;
}