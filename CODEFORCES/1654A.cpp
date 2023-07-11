#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		vector<int> nums(n);
		for(int j = 0; j < n; j++){
			cin >> nums[j];
		}
		sort(nums.begin(), nums.end());
		cout << (nums[n-2]+nums[n-1]) << "\n";
	}
	return 0;
}