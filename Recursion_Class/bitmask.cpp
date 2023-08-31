#include<bits/stdc++.h>

#define int long long

using namespace std;

int n = 4;
int status[5];

vector<int> tmp;

void perm(vector<int> tmp){
    for(auto x: tmp) cout << x << " ";
    cout << "\n";
    if(tmp.size()==n){
        for(auto x: tmp) cout << x << " ";
        cout << "\n";
        return ;
    }
    for(int i = 1; i <= n; i++){
        if(status[i]==0){
            tmp.push_back(i);
            status[i] = 1;
            perm(tmp);
            tmp.pop_back();
            status[i] = 0;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    perm(tmp);
    return 0;
}