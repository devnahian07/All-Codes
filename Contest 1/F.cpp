#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n; cin >> n;
		vector<int> nums(n);
		for(int j = 0; j < n; j++) cin >> nums[j];
		int sum = 0;
		int oc = 0;
		for(int j = 0; j < n; j++){
			sum+=nums[j];
			if(nums[j]%2!=0) oc++;
		}
		if(sum%2!=0) cout << "NO\n";
		else{
			if((sum/2)%2!=0){
				if(oc>=1) cout << "YES\n";
				else cout << "NO\n";
			}
			else{
				cout << "YES\n";
			}
		}
	}
	return 0;
}