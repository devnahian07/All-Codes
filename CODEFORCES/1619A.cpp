#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int l = s.size();
        if(l%2!=0) cout << "NO\n";
        else{
            string a, b;
            for(int j = 0; j < (l/2); j++){
                a.push_back(s[j]);
            }
            for(int j = (l/2); j < l; j++){
                b.push_back(s[j]);
            }
            a==b ? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}