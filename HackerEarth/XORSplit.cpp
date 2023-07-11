#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n==0 || ((n^(n-1))==((2*n)-1))) cout << 0 << "\n";
	else cout << 1 << "\n";
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}