#include<bits/stdc++.h>

#define int long long

using namespace std;

int fib(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else return fib(n-2)+fib(n-1);
}

signed main(){
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}