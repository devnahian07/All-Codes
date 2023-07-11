#include<bits/stdc++.h>

//#define int long long

using namespace std;

int main(){
		// ios_base::sync_with_stdio(false);
		// cin.tie(NULL);
		int n, m, a, b;
		cin >> n >> m >> a >> b;
		if(n%m==0){
			cout << min((n*a), ((n/m)*b)) << "\n";	
		}
		else{
			cout << min(((n/m)+1)*b,(((n/m)*b)+((n%m)*a))) << "\n";
		}
	return 0;
}