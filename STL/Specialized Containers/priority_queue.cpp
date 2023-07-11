#include<iostream>
#include<queue>

#define int long long

using namespace std;

signed main(){
	priority_queue<int, vector<int>, greater<int>> mypq;
	mypq.push(9);
	mypq.push(5);
	mypq.push(3);
	mypq.push(7);
	mypq.push(8);
	mypq.push(200);
	while(!mypq.empty()){
		cout << mypq.top() << " ";
		mypq.pop();
	}
	// cout << mypq.size() << "\n";
	// mypq.pop();
	// cout << mypq.size() << "\n";
	return 0;
}