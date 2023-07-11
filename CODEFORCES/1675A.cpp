#include<bits/stdc++.h>

//#define int long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if((max(0, x-a) + max(0, y-b))<=c) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}