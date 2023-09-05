#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n>m) cout << (n-m) << "\n";
    else{
        int cnt = 0;
        while(m>n){
            if(m%2 == 0) cnt++, m/=2;
            else m++, cnt++;
        }
        cnt+=(n-m);
        cout << cnt << "\n";
    }
    return 0;
}
