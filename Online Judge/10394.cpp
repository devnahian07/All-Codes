#include<bits/stdc++.h>

using namespace std;

#define int long long

const int N = 20000001;

int status[N];

vector<int> primes;

void sieve(){
    status[0] = status[1] = 1;
    for(int i = 2; i < N; i++){
        if(!status[i]){
            for(int j = i*i; j < N; j+=i) status[j] = 1;
        }
    }
    for(int i = 1; i < (N-2); i++){
        if(status[i]==0 && status[i+2] == 0){
            primes.push_back(i);
        }
    }
}

signed main(){
    sieve();
    int x;
    while(cin >> x){
        cout << "(" << primes[x-1] << ", " << (primes[x-1]+2) << ")\n";
    }
    return 0;
}