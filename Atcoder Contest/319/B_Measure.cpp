#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    for(int i = 0; i <= n && s.size()<=(n+1); i++){
        int f = 0;
        for(int j = 1; j <= 9; j++){
            if(n%j == 0 && (i%(n/j)) == 0){
                s.push_back(j+'0');
                f = 1;
                break;
            }
        }
        if(!f) s.push_back('-');
    }
    cout << s << "\n";
    return 0;
}