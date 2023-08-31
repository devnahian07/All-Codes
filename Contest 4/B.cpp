#include<bits/stdc++.h>

#define int long long

using namespace std;

string s;

bool is_perm(vector<int> tmp){
    sort(tmp.begin(), tmp.end());
    if(tmp[0] != 1) return false;
    for(int i = 1; i < (int)tmp.size(); i++){
        if((tmp[i] - tmp[i-1]) != 1) return false;
    }
    return true;
}

void back_track(vector<int> tmp, int pos){
    if(pos == (int)s.size()){
        if(is_perm(tmp)){
            for(auto x: tmp) cout << x << " ";
            cout << "\n";
            exit(0);
        }
        return ;
    }
    int val = 0;
    for(int i = pos; i < min((int)s.size(), pos+10); i++){
        val = val*10 + (s[i]-'0');
        tmp.push_back(val);
        back_track(tmp, i+1);
        tmp.pop_back();
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    vector<int> tmp;
    back_track(tmp, 0);
    return 0;
}