#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		string s;
		cin >> s;
		// int l = s.length();
		// char c = s[0];
		// int flag = 0;
		// for(int j = 0; j < l; j++){
		// 	int cnt = 0;
		// 	int x = j;
		// 	while(s[x]==c && x<l){
		// 		x++;
		// 		cnt++;
		// 	}
		// 	if(cnt==1){
		// 		flag = 1;
		// 		break;
		// 	}
		// 	else{
		// 		c = s[x];
		// 		j=x-1;
		// 	}
		// }
		// flag ? cout << "NO\n" : cout << "YES\n";
		bool f = false;
		for(int j = 0; j < s.size(); j++){
			int partner = 0;
			if(j>0 and s[j]==s[j-1]) partner++;
			if(j<s.size() and s[j]==s[j+1]) partner++;
			if(partner==0){
				f = true;
				break;
			}
		}
		f ? cout << "NO\n" : cout << "YES\n";
	}
	return 0;
}