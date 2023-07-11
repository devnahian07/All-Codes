#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    vector<int> he(n);
    for(int i = 0; i < n; i++) cin >> he[i];
    int cnt = 0;
    for(auto x: he){
        if(x>h) cnt+=2;
        else cnt++;
    }
    cout << cnt << "\n";
    return 0;
}