#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n; cin >> n;
    int cnt = 0;
    if((n/100)>0){
        cnt+=(n/100);
        n%=100;
    }
    if((n/20)>0){
        cnt+=(n/20);
        n%=20;
    }
    if((n/10)>0){
        cnt+=(n/10);
        n%=10;
    }
    if((n/5)>0){
        cnt+=(n/5);
        n%=5;
    }
    if((n/1)>0){
        cnt+=(n/1);
        n%=1;
    }
    cout << cnt << "\n";
    return 0;
}