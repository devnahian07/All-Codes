#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int x;
    cin >> x;
    if(x%2 == 0) cout << (x/2) << "\n";
    else{
        double y = x;
        double res = (y/2);
        printf("%.1lf\n", res);
    }
    return 0;
}