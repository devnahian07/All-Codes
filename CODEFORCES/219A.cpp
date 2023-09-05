#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    string a;
    cin >> a;
    int ar[123] = {0};
    for(int i = 0; i < a.size(); i++){
        ar[(int)(a[i])]++;
    }
    // aaaabbaaaabb
    /*
    a = 2
    z = 2
    */
    for(int i = 97; i < 123; i++){
        if(ar[i]%k != 0){
            cout << -1 << "\n";
            return 0;
        }
    }
    string t;
    while(t.size()!=a.size()){
        for(int i = 97; i < 123; i++){
            for(int j = 0; j < (ar[i]/k); j++){
                t.push_back((char)(i));
            }
        }
    }
    cout << t << "\n";
    return 0;
}