#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	sort(nums.begin(), nums.end());
	int cost = 0;
	for(int i = 0; i < n; i++){
		cost+=(nums[n-1]-nums[i]);
	}
	cout << cost << "\n";
	return 0;
}