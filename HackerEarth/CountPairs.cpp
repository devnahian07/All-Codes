#include<bits/stdc++.h>

#define int long long

using namespace std;

int msb(int n){
	int cnt = 0;
	while(n){
		n/=2;
		cnt++;
	}
	return cnt;
}

void solve(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	vector<int> MSB(31, 0);
	for(int i = 0; i < n; i++){
		if(nums[i]) MSB[msb(nums[i])]++;
	}
	int f = ((n*(n-1))/2);
	for(auto x: MSB){
		f-=((x*(x-1))/2);
	}
	cout << f << "\n";
}

signed main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}