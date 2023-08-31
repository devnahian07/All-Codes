#include<bits/stdc++.h>

#define int long long

using namespace std;

void GCD(){
    int t1, t2;
    cin >> t1 >> t2;
    set<int> primes;
    int freq1[100005] = {0}, freq2[100005] = {0};
    for(int i = 0; i < t1; i++){
        int a1, b1;
        cin >> a1 >> b1;
        primes.insert(a1);
        freq1[a1] = b1; 
    }
    for(int i = 0; i < t2; i++){
        int a2, b2;
        cin >> a2 >> b2;
        primes.insert(a2);
        freq2[a2] = b2; 
    }
    int GCD = 1;
    for(auto x: primes) GCD *= pow(x, min(freq1[x], freq2[x]));
    cout << GCD << "\n";
}

void LCM(){
    int t1, t2;
    cin >> t1 >> t2;
    set<int> primes;
    int freq1[100005] = {0}, freq2[100005] = {0};
    for(int i = 0; i < t1; i++){
        int a1, b1;
        cin >> a1 >> b1;
        primes.insert(a1);
        freq1[a1] = b1; 
    }
    for(int i = 0; i < t2; i++){
        int a2, b2;
        cin >> a2 >> b2;
        primes.insert(a2);
        freq2[a2] = b2; 
    }
    int LCM = 1;
    for(auto x: primes) LCM *= pow(x, max(freq1[x], freq2[x]));
    cout << LCM << "\n";
}

int GCD2(int n, int m){ // 16 32
    while(min(n, m)!=0){
        n = min(n, m);
        m = max(n, m) % min(n, m);
    }
    return max(n, m);
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // GCD();
    // LCM();
    cout << GCD2(16, 32) << "\n";
    return 0;
}