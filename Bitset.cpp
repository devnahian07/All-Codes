#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    // while(n>0){
    //     char c = (char)((n%2)+'0');
    //     cout << c;
    //     n/=2;
    // }
    // cout << "\n";
    // int i;
    // cin >> i;
    // if(((n<<i)&n)!=0) cout << 1 << "\n";
    // else cout << 0 << "\n";
    // for(int i = 30; i >= 0; i--){
    //     if(n&(1<<i)) cout << 1;
    //     else cout << 0;
    // }
    // cout << "\n";
    bitset<32>b(n);
    // cout << b << "\n";
    // for(int i = 32; i >= 0; i--){
    //     b[i] = 1 - b[i];
    // }
    // cout << b << "\n";
    cout << (b<<3) << "\n";
    cout << b.count() << "\n";
    return 0;
}