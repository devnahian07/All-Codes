#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int n; cin >> n;
		vector<int> nums(n);
		for(int j = 0; j < n; j++) cin >> nums[j];
		int flag = 0;
		int chk1 = nums[0];
		for(int j = 2; j < n; j+=2){
			if(!((nums[j]%2==0 && chk1%2==0)||(nums[j]%2!=0 && chk1%2!=0))){
				flag = 1;
				break;
			}
			chk1 = nums[j];
		}
		int chk2 = nums[1];
		for(int j = 3; j < n; j+=2){
			if(!((nums[j]%2==0 && chk2%2==0)||(nums[j]%2!=0 && chk2%2!=0))){
				flag = 1;
				break;
			}
			chk2 = nums[j];
		}
		flag ? cout << "NO\n" : cout << "YES\n";
	}
	return 0;
}