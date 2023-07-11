#include <bits/stdc++.h>

using namespace std;

int main()
{
	// vector<int> basket1;
	// basket1.push_back(2);
	// vector<int> basket2 = {1, 4, 2, 3, 6};
    vector<float> prices = {1.1, 4.5, 2.5, 6.3, 2.3, 4.8, 3.6, 7.2};
	// prices.push_back(6.5);
	// for (int i = 0; i < 6; i++)
	// 	cout << prices[i] << " ";
	vector<int> nums = {1, 2, 3, 4};
	// vector<int>:: iterator it = nums.begin();
	// // *(it) = 2;
	// *(nums.begin()) = 2;
	// cout << nums[0] << '\n';
	// prices.pop_back();
	// cout << prices[4] << "\n";
	// prices.erase(prices.begin());
	// cout << prices[0] << "\n";
	// prices.erase(prices.begin() + 2);
	// for(auto x: prices) cout << x << " ";
	// cout << "\n";
	// cout << prices.end() - prices.begin() << "\n";
	// prices.erase(prices.begin(), prices.begin()+2);
	// int l, r;
	// cin >> l >> r;
	// prices.erase(prices.begin()+l-1, prices.begin()+r);
	//nums.insert(nums.begin()+2, 7);
	// for(auto x: nums) cout << x << "\n";
	// cout << nums.front() << " " << nums.back() << "\n";
	// front and back return the actual value, prices.back == *(prices.end()-1)

	// stack<int> arr;
	// arr.push(1);
	// arr.push(2);
	// arr.push(3);
	// arr.pop();
	// int x = arr.top();
	// cout << x << "\n";

	// stack<char> stk;
	// stk.push('a');
	// stk.push('b');
	// stk.push('c');

	// cout << stk.top() << "\n";

	// while(!stk.empty()){
	// 	cout << stk.top() << "\n";
	// 	stk.pop();
	// }

	// these functions are available on every DS in STL: 1. empty(), 2. size()

	// queue<int> arr;
	// arr.push(12);
	// cout << arr.front() << "\n";
	// arr.pop();
	// cout << arr.front() << "\n";

	queue<float> s;
	s.push(1.5);
	s.push(1.8);
	s.push(1.3);
	s.push(1.75);
	s.push(2.5);
	s.push(3.55);
	cout << s.front() << "\n";
	cout << s.back() << "\n";
	s.pop();
	cout << s.front() << "\n";
	while(!s.empty()){
		cout << s.front() << " ";
		s.pop();
	}
	cout << "\n";
	return 0;
}