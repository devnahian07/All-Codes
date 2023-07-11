#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve(){
	int n;
	cin >> n;
	bitset<32>num(n);
	for(int i = 31; i >= 0; i--){
		if(num[i]==1){
			cout << (1LL<<i) << "\n";
			return ;
		}
	}
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
}