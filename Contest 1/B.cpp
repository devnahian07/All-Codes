#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int n; cin >> n;
		int sum = 0;
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			sum += x;
		}
		if((sum-n)%2==0) cout << "maomao90\n";
		else cout << "errorgorn\n";
	}
	return 0;
}