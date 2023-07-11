#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int cnt = 0;
		for(int j = 0; j < 4; j++){
			int x;
			cin >> x;
			cnt+=x;
		}
		if(cnt==0) cout << 0 << "\n";
		else if(cnt==4) cout << 2 << "\n";
		else cout << 1 << "\n";
	}
	return 0;
}