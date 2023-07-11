#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	int n; cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	int x = 0;
	for(int i = 0; i < n; i++) x^=nums[i];
	cout << x << "\n";
	return 0;
}