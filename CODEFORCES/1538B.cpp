#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		int cnt = 0;
		int sum = 0;
		vector<int> nums(n);
		for(int j = 0; j < n; j++){
			cin >> nums[j];
			sum+=nums[j];
		}
		if(sum%n!=0){
			cout << -1 << "\n";
			continue;
		}
		int cmp = sum/n;
		for(auto x: nums){
			if(x>cmp) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}