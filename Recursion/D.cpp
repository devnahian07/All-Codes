#include<bits/stdc++.h>

#define int long long

using namespace std;

void prnt(int n, int s, int g){
    if(s==n) return ;
    for(int j = 0; j < g; j++) cout << ' ';
    for(int j = 0; j < ((2*s)+1); j++) cout << '*';
    cout << "\n";
    prnt(n, s+1, g-1);
}

signed main(){
    int n;
    cin >> n;
    prnt(n, 0, n-1);
    return 0;
}