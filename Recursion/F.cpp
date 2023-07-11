#include<bits/stdc++.h>

#define int long long

using namespace std;

int steps(int s, int e, int cnt){
    if((s+1)>e && (s+2)>e && (s+3)>e) return cnt;
    if((s+1)<=e) steps(s+1, e, cnt+1);
    if((s+2)<=e) steps(s+2, e, cnt+1);
    if((s+3)<=e) steps(s+3, e, cnt+1);
}

signed main(){
    int s, e;
    cin >> s >> e;
    cout << steps(s, e, 0) << "\n";
    return 0;
}