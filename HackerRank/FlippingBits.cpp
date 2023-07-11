#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int n;
		cin >> n;
		cout << (n^((1LL<<32)-1)) << "\n";
	}
	return 0;
}