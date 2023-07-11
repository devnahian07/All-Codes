 #include<bits/stdc++.h>

using namespace std;

#define int long long

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n+n);
	for(int i = 0; i < (n+n); i++) cin >> nums[i];
	int a = nums[0];
	for(int i = 1; i < (n+n); i++) a&=nums[i];
	cout << a << "\n";
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		solve();
	}
}