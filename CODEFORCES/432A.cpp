#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int members = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if((k+x)<=5) members++; 
	}
	cout << (members/3) << "\n";
	return 0;
}