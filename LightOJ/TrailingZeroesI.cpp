#include<bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1000001;

int status[N];

vector<int> primes;

void normalSieve(){
    status[1] = 1;
    for(int i = 2; i < N; i++){
        if(status[i]==0){
            status[i] = i;
            primes.push_back(i);
            for(int j = i*i; j < N; j+=i){
                if(status[j]==0) status[j] = i;
            }
        }
    }
}

void solve(int i){
    int n;
    cin >> n;
    int ans = 1;
    int r = sqrt(n);
    for(int i = 0; i < primes.size() && primes[i]<=r; i++){
        int cnt = 0;
        while(n%primes[i] == 0){
            n/=primes[i], cnt++;
            if(n==0 || n==1) break;
        }
        ans*=(cnt+1);
        r=sqrt(n);
    }
    if(n > 1) ans*=2;
    cout << "Case " << i << ": " << (ans-1) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    normalSieve();
    int t; cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
    return 0;
}