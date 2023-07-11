#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, r;
	cin >> l >> r;
	int mx = 0;
	for(int i = l; i <= r; i++){
		for(int j = l; j <= r; j++){
			if((i^j)>mx){
				mx = (i^j);
			}
		}
	}
	cout << mx << "\n";
	return 0;
}