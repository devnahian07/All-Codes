#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    int n, m;
    cin >> n >> m;
    if(n>m) cout << (n-m) << "\n";
    else{
        int tmp1 = n, tmp2 = n;
        int cnt1 = 0;
        while(tmp1!=m){
            if(tmp1<m) tmp1*=2, cnt1++;
            else if(tmp1>m) tmp1--, cnt1++;
        }
        int cnt2 = 0;
        while(tmp2 > 0 && tmp2!=m){
            if(((m/tmp2)%2)!=0){
                tmp2--;
                cnt2++;
            }
            else{
                int res = (m/tmp2)/2;
                tmp2*=(tmp2*pow(2, res));
                cnt2+=res;
            }
        }
        cout << tmp1 << " " << tmp2 << "\n";
    }
    return 0;
}
