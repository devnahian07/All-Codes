#include<bits/stdc++.h>

#define int long long

using namespace std;

const int n = 1e6;

vector<int> primes[n+1];

int status[n+1];

void sieve(){
    status[0] = status[1] = 1;
    for(int i = 2; i <= n; i++){
        if(!status[i]){
            status[i] = i;
            for(int j = i*i; j <= n; j+=i){
                if(!status[j]) status[j] = i;
            }
        }
    }
}

// nlogn
int totientFunc(int n){
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(__gcd(n, i) == 1) ans++;
    }
    return ans;
}

// logn
int impvTotient(int n){
    int phi = n;
    while(n > 1){
        int p = status[n];
        phi -= (phi/p);
        while(n%p == 0) n/=p;
    }
    return phi;
}

void phi_1_to_n(int n){
    vector<int>phi(n+1);
    for(int i = 0; i <= n; i++) phi[i] = i;
    for(int i = 2; i <= n; i++){
        if(phi[i] == i){
            for(int j = i; j <= n; j+=i) phi[j]-=(phi[j]/i);
        }
    } 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n;
    cin >> n;
    // cout << totientFunc(n) << "\n";
    // cout << status[n] << "\n";
    cout << impvTotient(n) << "\n";
    return 0;
}