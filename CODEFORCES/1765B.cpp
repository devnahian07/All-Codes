#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        string a;
        cin >> a;
        // 0 1 2 3 4 5
        int f = 0;
        for(int j = 1; j < n; j+=3){
            if(a[j]!=a[j+1]){
                f = 1;
                break;
            }
        }
        f ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}