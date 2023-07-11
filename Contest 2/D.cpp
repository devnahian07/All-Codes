#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	int a = nums[0];
	for(int i = 1; i < n; i++) a&=nums[i];
	cout << a << "\n";
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}