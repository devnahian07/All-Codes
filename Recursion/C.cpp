#include<bits/stdc++.h>

#define int long long

using namespace std;

int lnm(int x){
    while((x%10)==0) x/=10;
    return x;
}

bool rec(int s){
    if(s==1) return true;
    if(s<1) return false;
    if(lnm(s)==1) rec(s/10);
    else if(lnm(s)==2 || (lnm(s)%4==0)) rec(s/20);
    else return false;
}

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x;
        cin >> x;
        rec(x) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}