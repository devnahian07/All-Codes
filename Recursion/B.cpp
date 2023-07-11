#include<bits/stdc++.h>

#define int long long

using namespace std;

void prnt(string s, int l, int k){
    if(k>l){
        return ;
    }
    cout << s[k] << " ";
    prnt(s, l, k+1);
}

signed main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int l = s.size();
        l = l-1;
        prnt(s, l, 0);
        cout << "\n";
    }
    return 0;
}