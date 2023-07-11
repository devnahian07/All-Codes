#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> ar(n);
	for(int i = 0; i < n; i++) cin >> ar[i];
	cout << ar[0] << "\n";
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}