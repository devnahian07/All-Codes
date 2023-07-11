#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		int x = 1;
		int cnt = 0;
		vector<int> nums;
		while(n>0){
			if((n%10)*x != 0){
				nums.push_back(((n%10)*x));
				cnt++;
			}
			n/=10;
			x*=10;
		}
		cout << cnt << "\n";
		for(auto x: nums) cout << x << " ";
		cout << "\n";
	}
	return 0;
}