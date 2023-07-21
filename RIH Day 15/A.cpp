#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    string a;
    for(int i = 1; i <= 1000; i++){
        string t;
        int tmp = i;
        while(tmp>0){
            t.push_back(((tmp%10) + '0'));
            tmp/=10;
        }
        reverse(t.begin(), t.end());
        a+=t;
    }
    int n;
    cin >> n;
    cout << a[n-1] << "\n";
    return 0;
}