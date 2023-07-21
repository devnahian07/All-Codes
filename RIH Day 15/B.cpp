#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    int ar1[n];
    int ar2[n];
    for(int i = 0; i < n; i++) cin >> ar1[i];
    for(int i = 0; i < n; i++) cin >> ar2[i];
    int x1 = ar1[0];
    int x2 = ar2[0];
    for(int i = 1; i < n; i++) x1 = (x1|ar1[i]);
    for(int i = 1; i < n; i++) x2 = (x2|ar2[i]);
    cout << (x1+x2) << "\n";
    return 0;
}