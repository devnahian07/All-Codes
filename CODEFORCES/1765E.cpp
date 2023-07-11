#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n, a, b;
		cin >> n >> a >> b;
		if(a<b){
			n % a == 0 ? cout << (n/a) << "\n" : cout << ((n/a)+1) << "\n";
		}
		else{
			
		}
	}
	return 0;
}