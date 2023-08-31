#include<bits/stdc++.h>

using namespace std;

const int N = 10000015;

int status[N];
vector<int> primes;

void sieve(){
    status[0] = status[1] = 1;
    for(long long i = 2; i < N; i++){
        if(!status[i]){
            primes.push_back(i);
            for(long long j = i*i; j < N; j+=i) status[j] = 1;
        }
    }
}
int main(){
    sieve();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        int cnt = 0;
        for(long long j = 0; primes[j]<=(n/2); j++){
            long long rem = n - primes[j];
            if(status[rem] == 0) cnt++;
        }
        cout << "Case " << i << ": " << cnt << "\n";
    }
    return 0;
}
