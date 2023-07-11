#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	int x = a&b;
	cout << ((a^x)+(b^x)) << "\n";
	// cout << (a^b) << "\n";
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}