#include<bits/stdc++.h>

#define int long long

#define ll long long

using namespace std;

const int mod = 1000000007;

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
ll modInverse(ll a, ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    ll res = (x%m + m) % m;
    return res;
}

void solve(){
    int n;
    cin >> n;
    int res1 = (((((((4%mod)*(n%mod))%mod)*(n%mod))%mod)*(n%mod))%mod);
    int res2 = (((((3%mod)*(n%mod))%mod)*(n%mod))%mod);
    int res3 = ((((res1+res2-n)%mod + mod)*modInverse(6, mod))%mod);
    cout << ((res3*2022)%mod) << "\n";
}

/*
1.1 1.2
2.1 2.2
*/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}