#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin >> ws, s);
    map<char, int> f;
    for(auto x: s){
        if(('a'<=x && x<='z')||('A'<=x && x<='Z')) f[x]++;
    }
    for(auto x: f){
        if(x.second > 1){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}