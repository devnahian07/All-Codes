#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ar[123];
    for(int i = 97; i < 123; i++) ar[i] = 0;
    for(int i = 0; i < n; i++){
        s[i] < 97 ? ar[s[i]+32]++ : ar[s[i]]++;
    }
    int f = 0;
    for(int i = 97; i < 123; i++){
        if(ar[i]==0){
            f = 1;
            break;
        }
    }
    f ? cout << "NO\n" : cout << "YES\n";
    return 0;
}