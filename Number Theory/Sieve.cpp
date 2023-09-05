#include<bits/stdc++.h>

#define int long long

using namespace std;

vector<int> status(1000001, 0);

vector<int> primes;

void sieve(){
    int n = 1000001;
    status[1] = 1;
    for(int i = 2; i < n; i++){
        if(!status[i]){
            primes.push_back(i);
            for(int j = i*i; j < n; j+=i) status[j] = 1;
        }
    }
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // sieve();
    // for(auto x: primes) cout << x << " ";
    // cout << "\n";
    int n;
    cin >> n;
    cout << status[n] << "\n";
    return 0;
}