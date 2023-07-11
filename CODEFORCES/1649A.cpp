#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;
		vector<int> nums(n);
		for(int j = 0; j < n; j++){
			cin >> nums[j];
		}
		int l = 0, r = 0;
		for(int j = 0; j < n; j++){
			if(nums[j]==0){
				l = j;
				break;
			}
		}
		for(int j = n-1; j >= 0; j--){
			if(nums[j]==0){
				r = j;
				break;
			}
		}
		if(r!=0 && l!=0) cout << (r+2-l) << "\n";
		else cout << 0 << "\n";
	}
	// 1 0 1 1 0 1 1
	return 0;
}