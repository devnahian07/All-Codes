#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	int x;
	cin >> x;
	bitset<32>num(x);
	cout << num.count() << "\n";
	return 0;
}