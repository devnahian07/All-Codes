#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		// int n; cin >> n;
		// string s; cin >> s;
		// int T = 0, I = 0, M = 0, U = 0, R = 0;
		// for(int j = 0; j < n; j++){
		// 	if(s[j]=='T') T++;
		// 	else if(s[j]=='i') I++;
		// 	else if(s[j]=='m') M++;
		// 	else if(s[j]=='u') U++;
		// 	else if(s[j]=='r') R++;
		// }
		// if(T==1 && I==1 && M==1 && U==1 && R==1 && n==5) cout << "YES\n";
		// else cout << "NO\n";
		int n; cin >> n;
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		if(s=="Timru") cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}