#include<bits/stdc++.h>

#define int long long

using namespace std;

int status[1000001];

vector<int> primes;

void sieveOfEulerTE(){
    int n = 1000001;
    status[1] = 1;
    for(int i = 2; i < n; i++){
        if(status[i]==0){
            primes.push_back(i);
            status[i] = i;
            for(int j = i*i; j < n; j+=i){
                if(status[j]==0) status[j] = i;
            }
        }
    }
}

void sieveOfEulerME(int n){
    status[1] = 1;
    for(int i = 2; i < n; i++){
        if(status[i] == 0){
            status[i] = i;
            primes.push_back(i);
            for(int j = i*i; j < n; j+=i){
                if(status[j]==0) status[j] = i;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // sieveOfEulerTE();
    int n;
    cin >> n;
    sieveOfEulerME(sqrt(n));
    // while(n>1){
    //     int tmp = status[n];
    //     int cnt = 0;
    //     while(status[n]==tmp){
    //         n/=status[n];
    //         cnt++;
    //     }
    //     cout << "(" << tmp << " ^ " << cnt << ") ";
    // }
    for(auto x: primes){
        int cnt = 0;
        while(n%x == 0) cnt++, n/=x;
        if(cnt > 0){
            cout << "(" << x << " ^ " << cnt << ") ";
        }
    }
    if(n > 1){
        cout << "(" << n << " ^ 1)";
    }
    return 0;
}