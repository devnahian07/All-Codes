#include<bits/stdc++.h>

using namespace std;

const int N = 5000005;

#define int unsigned long long

vector<int> phi(N);

void totient(){
    for(int i = 0; i <= N; i++) phi[i] = i;
    for(int i = 2; i <= N; i++){
        if(phi[i]==i){
            for(int j = i; j <= N; j+=i) phi[j]-=(phi[j]/i);
        }
    }
}

signed main(){
    totient();
    for(int i = 1; i < N; i++) phi[i] = phi[i-1] + (phi[i]*phi[i]);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int a, b;
        cin >> a >> b;
        int res = phi[b] - phi[a-1];
        cout << "Case " << i << ": " << res << "\n";
    }
    return 0;
}