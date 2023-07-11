#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int q;
    cin >> q;
    map<string, int> studs;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        if(x==1){
            string s; int n;
            cin >> s >> n;
            studs[s] += n;
        }
        else if(x==2){
            string s;
            cin >> s;
            studs[s] = 0;
        }
        else{
            string s;
            cin >> s;
            cout << studs[s] << "\n";
        }
    }
    return 0;
}