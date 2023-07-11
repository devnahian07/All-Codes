#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// int n;
	// cin >> n;
	// int ar[n];
	// for(int i = 0; i < n; i++){
	// 	cin >> ar[i];
	// }
	// int f = 0;
	// for(int i = 0; i < n; i++){
	// 	f = (f^ar[i]);
	// }
	// cout << f << "\n";

	// Check power of 2 in O(1)
	// int n;
	// cin >> n;
	// if((n^(n-1))==((2*n)-1)) cout << "YES\n";
	// else cout << "NO\n";

	// Cumulative XOR-SUM
	// int n; cin >> n;
	// int ar[n+1];
	// for(int i = 1; i <= n; i++) cin >> ar[i];
	// int Xor[n+1];
	// Xor[1] = ar[1];
	// for(int i = 2; i <= n; i++) Xor[i] = Xor[i-1]^ar[i];
	// int q;
	// cin >> q;
	// while(q--){
	// 	int l, r;
	// 	cin >> l >> r;
	// 	cout << (Xor[r]^Xor[l-1]) << "\n";
	// }

	//i-th bit set/reset
	// int n, i;
	// cin >> n >> i;
	// if((n&(1<<i))>0) cout << "Set\n";
	// else cout << "Reset\n";

	//Binary Representation
	// cin >> n;
	// for(int i = 30; i >= 0; i--){
	// 	if((n&(1<<i))>0) cout << 1;
	// 	else cout << 0;
	// }
	// cout << "\n";

	//Bitset
	bitset<32> n(13);
	cout << n << "\n";
	cout << (n<<3) << "\n";
	cout << n.count() << "\n";
	for(int i = 0; i < 32; i++) n[i] = 1 - n[i];
	cout << n << "\n";
	cout << n.count() << "\n";
	return 0;
}