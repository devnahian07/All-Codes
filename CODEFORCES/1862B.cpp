#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>in(n);
    for(int i = 0; i < n; i++) cin >> in[i];
    vector<int>out;
    out.push_back(in[0]);
    for(int i = 1; i < n; i++){
        if(in[i-1]>in[i]){
            out.push_back(in[i]);
            out.push_back(in[i]);
        }
        else{
            out.push_back(in[i]);
        }
    }
    cout << out.size() << "\n";
    for(auto x: out) cout << x << " ";
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}