#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	cin >> a;
	int f = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
			f = 1;
			break;
		}
	}
	!f ? cout << "NO\n" : cout << "YES\n";
	return 0;
}