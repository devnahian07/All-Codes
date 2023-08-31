#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    auto sum = 0;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else{
            n = (n*3)+1;
        }
        sum++;
    }
    cout << sum+1 << "\n";
    return 0;
}