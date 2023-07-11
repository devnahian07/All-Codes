#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	for(int i = s.size()-1; i >= 0; i--){
		if(s[i]==s[s.size()-1]) cout << s[i];
	}
	cout << "\n";
	return 0;
}