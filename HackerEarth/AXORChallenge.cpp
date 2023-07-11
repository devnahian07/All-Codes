#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	bitset<32>br(n);
	int l = 0;
	while(n>0){
		l++;
		n/=2;
	}
	int f1 = 0, f2 = 0;
	for(int i = l-1; i >= 0; i--){
		if(i==(l-1)) f1+=(br[i]*pow(2, i));
		else if(br[i]==0){
			f1+=(pow(2, i));
			f2+=(pow(2, i));
		}
		else{
			f2+=(pow(2, i));
		}
	}
	cout << f1*f2 << "\n";
	return 0;
}