#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n, k;
    cin >> n >> k;
    double d = 0;
    double x[n], y[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    for(int i = 1; i < n; i++){
        double f = sqrt(((x[i]-x[i-1])*(x[i]-x[i-1]))+((y[i]-y[i-1])*(y[i]-y[i-1])));
        d += f;
    }
    double ans = k*(d/50);
    printf("%.9lf\n", ans);
    return 0;
}